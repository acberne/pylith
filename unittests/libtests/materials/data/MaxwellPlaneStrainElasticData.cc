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

// DO NOT EDIT THIS FILE
// This file was generated from python application maxwellplanestrainelastic.

#include "MaxwellPlaneStrainElasticData.hh"

const int pylith::materials::MaxwellPlaneStrainElasticData::_dimension = 2;

const int pylith::materials::MaxwellPlaneStrainElasticData::_numLocs = 2;

const int pylith::materials::MaxwellPlaneStrainElasticData::_numProperties = 4;

const int pylith::materials::MaxwellPlaneStrainElasticData::_numStateVars = 3;

const int pylith::materials::MaxwellPlaneStrainElasticData::_numDBProperties = 4;

const int pylith::materials::MaxwellPlaneStrainElasticData::_numDBStateVars = 8;

const int pylith::materials::MaxwellPlaneStrainElasticData::_numPropsQuadPt = 4;

const int pylith::materials::MaxwellPlaneStrainElasticData::_numVarsQuadPt = 8;

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_lengthScale =   1.00000000e+03;

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_timeScale =   1.00000000e+00;

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_pressureScale =   2.25000000e+10;

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_densityScale =   1.00000000e+03;

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_dtStableImplicit =   8.88888889e+06;

const int pylith::materials::MaxwellPlaneStrainElasticData::_numPropertyValues[] = {
1,
1,
1,
1,
};

const int pylith::materials::MaxwellPlaneStrainElasticData::_numStateVarValues[] = {
1,
3,
4,
};

const char* pylith::materials::MaxwellPlaneStrainElasticData::_dbPropertyValues[] = {
"density",
"vs",
"vp",
"viscosity",
};

const char* pylith::materials::MaxwellPlaneStrainElasticData::_dbStateVarValues[] = {
"stress-zz-initial",
"total-strain-xx",
"total-strain-yy",
"total-strain-xy",
"viscous-strain-xx",
"viscous-strain-yy",
"viscous-strain-zz",
"viscous-strain-xy",
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_dbProperties[] = {
  2.50000000e+03,
  3.00000000e+03,
  5.19615242e+03,
  1.00000000e+18,
  2.00000000e+03,
  1.20000000e+03,
  2.07846097e+03,
  1.00000000e+18,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_dbStateVars[] = {
  1.50000000e+04,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.50000000e+04,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_properties[] = {
  2.50000000e+03,
  2.25000000e+10,
  2.25000000e+10,
  4.44444444e+07,
  2.00000000e+03,
  2.88000000e+09,
  2.88000000e+09,
  3.47222222e+08,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_stateVars[] = {
  1.50000000e+04,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.50000000e+04,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_propertiesNondim[] = {
  2.50000000e+00,
  1.00000000e+00,
  1.00000000e+00,
  4.44444444e+07,
  2.00000000e+00,
  1.28000000e-01,
  1.28000000e-01,
  3.47222222e+08,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_stateVarsNondim[] = {
  6.66666667e-07,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  2.00000000e-06,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_density[] = {
  2.50000000e+03,
  2.00000000e+03,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_strain[] = {
  1.10000000e-04,
  1.20000000e-04,
  1.40000000e-04,
  4.10000000e-04,
  4.20000000e-04,
  4.40000000e-04,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_stress[] = {
  7.33350000e+06,
  7.73950000e+06,
  4.79400000e+06,
  4.09740000e+06,
  4.15024000e+06,
  2.21976000e+06,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_elasticConsts[] = {
  6.75000000e+10,
  2.25000000e+10,
  0.00000000e+00,
  2.25000000e+10,
  6.75000000e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.50000000e+10,
  8.64000000e+09,
  2.88000000e+09,
  0.00000000e+00,
  2.88000000e+09,
  8.64000000e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.76000000e+09,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_initialStress[] = {
  2.10000000e+04,
  2.20000000e+04,
  2.40000000e+04,
  5.10000000e+04,
  5.20000000e+04,
  5.40000000e+04,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_initialStrain[] = {
  3.10000000e-05,
  3.20000000e-05,
  3.40000000e-05,
  6.10000000e-05,
  6.20000000e-05,
  6.40000000e-05,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainElasticData::_stateVarsUpdated[] = {
  1.50000000e+04,
  1.10000000e-04,
  1.20000000e-04,
  1.40000000e-04,
  2.33333333e-05,
  3.23333333e-05,
 -5.56666667e-05,
  1.06000000e-04,
  4.50000000e+04,
  4.10000000e-04,
  4.20000000e-04,
  4.40000000e-04,
  1.13333333e-04,
  1.22333333e-04,
 -2.35666667e-04,
  3.76000000e-04,
};

pylith::materials::MaxwellPlaneStrainElasticData::MaxwellPlaneStrainElasticData(void)
{ // constructor
  dimension = _dimension;
  numLocs = _numLocs;
  numProperties = _numProperties;
  numStateVars = _numStateVars;
  numDBProperties = _numDBProperties;
  numDBStateVars = _numDBStateVars;
  numPropsQuadPt = _numPropsQuadPt;
  numVarsQuadPt = _numVarsQuadPt;
  lengthScale = _lengthScale;
  timeScale = _timeScale;
  pressureScale = _pressureScale;
  densityScale = _densityScale;
  dtStableImplicit = _dtStableImplicit;
  numPropertyValues = const_cast<int*>(_numPropertyValues);
  numStateVarValues = const_cast<int*>(_numStateVarValues);
  dbPropertyValues = const_cast<char**>(_dbPropertyValues);
  dbStateVarValues = const_cast<char**>(_dbStateVarValues);
  dbProperties = const_cast<PylithScalar*>(_dbProperties);
  dbStateVars = const_cast<PylithScalar*>(_dbStateVars);
  properties = const_cast<PylithScalar*>(_properties);
  stateVars = const_cast<PylithScalar*>(_stateVars);
  propertiesNondim = const_cast<PylithScalar*>(_propertiesNondim);
  stateVarsNondim = const_cast<PylithScalar*>(_stateVarsNondim);
  density = const_cast<PylithScalar*>(_density);
  strain = const_cast<PylithScalar*>(_strain);
  stress = const_cast<PylithScalar*>(_stress);
  elasticConsts = const_cast<PylithScalar*>(_elasticConsts);
  initialStress = const_cast<PylithScalar*>(_initialStress);
  initialStrain = const_cast<PylithScalar*>(_initialStrain);
  stateVarsUpdated = const_cast<PylithScalar*>(_stateVarsUpdated);
} // constructor

pylith::materials::MaxwellPlaneStrainElasticData::~MaxwellPlaneStrainElasticData(void)
{}


// End of file
