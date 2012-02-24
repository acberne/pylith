// -*- C++ -*-
//
// ======================================================================
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2012 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

#include <portinfo>

#include "GeometryPoint2D.hh" // implementation of class methods

#include "pylith/utils/array.hh" // USES scalar_array

#include <cassert> // USES assert()

// ----------------------------------------------------------------------
// Default constructor.
pylith::feassemble::GeometryPoint2D::GeometryPoint2D(void) :
  CellGeometry(POINT, 2)
{ // constructor
  const PylithScalar vertices[] = { 0.0 };
  _setVertices(vertices, 1, 1);
} // constructor

// ----------------------------------------------------------------------
// Default destructor.
pylith::feassemble::GeometryPoint2D::~GeometryPoint2D(void)
{ // destructor
} // destructor

// ----------------------------------------------------------------------
// Create a copy of geometry.
pylith::feassemble::CellGeometry*
pylith::feassemble::GeometryPoint2D::clone(void) const
{ // clone
  return new GeometryPoint2D();
} // clone

// ----------------------------------------------------------------------
// Get cell geometry for lower dimension cell.
pylith::feassemble::CellGeometry*
pylith::feassemble::GeometryPoint2D::geometryLowerDim(void) const
{ // geometryLowerDim
  return 0;
} // geometryLowerDim

// ----------------------------------------------------------------------
// Transform coordinates in reference cell to global coordinates.
void
pylith::feassemble::GeometryPoint2D::ptsRefToGlobal(PylithScalar* ptsGlobal,
						    const PylithScalar* ptsRef,
						    const PylithScalar* vertices,
						    const int dim,
						    const int npts) const
{ // ptsRefToGlobal
  assert(0 != ptsGlobal);
  assert(0 != ptsRef);
  assert(0 != vertices);
  assert(2 == dim);
  assert(spaceDim() == dim);

  const int size = npts*dim;
  for (int i=0; i < size; ++i)
    ptsGlobal[i] = vertices[i];
} // ptsRefToGlobal

// ----------------------------------------------------------------------
// Compute Jacobian at location in cell.
void
pylith::feassemble::GeometryPoint2D::jacobian(scalar_array* jacobian,
					  PylithScalar* det,
					  const scalar_array& vertices,
					  const scalar_array& location) const
{ // jacobian
  assert(0 != jacobian);
  assert(0 != det);

  assert(1 == jacobian->size());
  
  (*jacobian)[0] = 1.0;
  *det = 1.0;
} // jacobian

// ----------------------------------------------------------------------
// Compute Jacobian at location in cell.
void
pylith::feassemble::GeometryPoint2D::jacobian(PylithScalar* jacobian,
					      PylithScalar* det,
					      const PylithScalar* vertices,
					      const PylithScalar* location,
					      const int dim,
					      const int npts) const
{ // jacobian
  assert(0 != jacobian);
  assert(0 != det);
  assert(0 != vertices);
  assert(0 != location);
  assert(2 == dim);
  assert(spaceDim() == dim);

  for (int i=0; i < npts; ++i) {
    jacobian[i] = 1.0;
    det[i] = 1.0;
  } // for
} // jacobian


// End of file
