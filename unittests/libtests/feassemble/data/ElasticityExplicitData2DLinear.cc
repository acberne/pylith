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
// Copyright (c) 2010 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application elasticityexplicitapp.

#include "ElasticityExplicitData2DLinear.hh"

const int pylith::feassemble::ElasticityExplicitData2DLinear::_spaceDim = 2;

const int pylith::feassemble::ElasticityExplicitData2DLinear::_cellDim = 2;

const int pylith::feassemble::ElasticityExplicitData2DLinear::_numVertices = 3;

const int pylith::feassemble::ElasticityExplicitData2DLinear::_numCells = 1;

const int pylith::feassemble::ElasticityExplicitData2DLinear::_numBasis = 3;

const int pylith::feassemble::ElasticityExplicitData2DLinear::_numQuadPts = 1;

const char* pylith::feassemble::ElasticityExplicitData2DLinear::_matType = "ElasticPlaneStrain";

const char* pylith::feassemble::ElasticityExplicitData2DLinear::_matDBFilename = "data/elasticplanestrain.spatialdb";

const int pylith::feassemble::ElasticityExplicitData2DLinear::_matId = 0;

const char* pylith::feassemble::ElasticityExplicitData2DLinear::_matLabel = "elastic strain 2-D";

const double pylith::feassemble::ElasticityExplicitData2DLinear::_dt =   1.00000000e-02;

const double pylith::feassemble::ElasticityExplicitData2DLinear::_gravityVec[] = {
  0.00000000e+00, -1.00000000e+08,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_vertices[] = {
  2.00000000e-01, -4.00000000e-01,
  3.00000000e-01,  5.00000000e-01,
 -1.00000000e+00, -2.00000000e-01,
};

const int pylith::feassemble::ElasticityExplicitData2DLinear::_cells[] = {
0,1,2,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_verticesRef[] = {
 -1.00000000e+00, -1.00000000e+00,
  1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00,  1.00000000e+00,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_quadPts[] = {
 -3.33333333e-01, -3.33333333e-01,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_quadWts[] = {
  2.00000000e+00,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_basis[] = {
  3.33333333e-01,  3.33333333e-01,
  3.33333333e-01,};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_basisDerivRef[] = {
 -5.00000000e-01, -5.00000000e-01,
  5.00000000e-01,  0.00000000e+00,
  0.00000000e+00,  5.00000000e-01,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_fieldTIncr[] = {
  1.30000000e+00, -9.00000000e-01,
  1.40000000e+00,  1.50000000e+00,
  5.00000000e-01, -9.00000000e-01,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_fieldT[] = {
  1.60000000e+00, -8.00000000e-01,
  9.00000000e-01,  7.00000000e-01,
 -2.00000000e-01, -1.10000000e+00,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_fieldTmdt[] = {
  8.00000000e-01,  1.00000000e-01,
  5.00000000e-01,  3.00000000e-01,
 -1.00000000e-01, -6.00000000e-01,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_valsResidual[] = {
 -7.10095578e+10,  1.36893348e+11,
 -1.02829242e+10, -1.20976325e+11,
  8.12828570e+10, -1.59202314e+10,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_valsJacobian[] = {
  1.52777778e+06,  0.00000000e+00,
  1.52777778e+06,  0.00000000e+00,
  1.52777778e+06,  0.00000000e+00,
  0.00000000e+00,  1.52777778e+06,
  0.00000000e+00,  1.52777778e+06,
  0.00000000e+00,  1.52777778e+06,
  1.52777778e+06,  0.00000000e+00,
  1.52777778e+06,  0.00000000e+00,
  1.52777778e+06,  0.00000000e+00,
  0.00000000e+00,  1.52777778e+06,
  0.00000000e+00,  1.52777778e+06,
  0.00000000e+00,  1.52777778e+06,
  1.52777778e+06,  0.00000000e+00,
  1.52777778e+06,  0.00000000e+00,
  1.52777778e+06,  0.00000000e+00,
  0.00000000e+00,  1.52777778e+06,
  0.00000000e+00,  1.52777778e+06,
  0.00000000e+00,  1.52777778e+06,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_valsResidualLumped[] = {
 -7.10086411e+10,  1.36894418e+11,
 -1.02842992e+10, -1.20980297e+11,
  8.12833153e+10, -1.59173286e+10,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_valsJacobianLumped[] = {
  4.58333333e+06,  4.58333333e+06,
  4.58333333e+06,  4.58333333e+06,
  4.58333333e+06,  4.58333333e+06,
};

pylith::feassemble::ElasticityExplicitData2DLinear::ElasticityExplicitData2DLinear(void)
{ // constructor
  spaceDim = _spaceDim;
  cellDim = _cellDim;
  numVertices = _numVertices;
  numCells = _numCells;
  numBasis = _numBasis;
  numQuadPts = _numQuadPts;
  matType = const_cast<char*>(_matType);
  matDBFilename = const_cast<char*>(_matDBFilename);
  matId = _matId;
  matLabel = const_cast<char*>(_matLabel);
  dt = _dt;
  gravityVec = const_cast<double*>(_gravityVec);
  vertices = const_cast<double*>(_vertices);
  cells = const_cast<int*>(_cells);
  verticesRef = const_cast<double*>(_verticesRef);
  quadPts = const_cast<double*>(_quadPts);
  quadWts = const_cast<double*>(_quadWts);
  basis = const_cast<double*>(_basis);
  basisDerivRef = const_cast<double*>(_basisDerivRef);
  fieldTIncr = const_cast<double*>(_fieldTIncr);
  fieldT = const_cast<double*>(_fieldT);
  fieldTmdt = const_cast<double*>(_fieldTmdt);
  valsResidual = const_cast<double*>(_valsResidual);
  valsJacobian = const_cast<double*>(_valsJacobian);
  valsResidualLumped = const_cast<double*>(_valsResidualLumped);
  valsJacobianLumped = const_cast<double*>(_valsJacobianLumped);
} // constructor

pylith::feassemble::ElasticityExplicitData2DLinear::~ElasticityExplicitData2DLinear(void)
{}


// End of file
