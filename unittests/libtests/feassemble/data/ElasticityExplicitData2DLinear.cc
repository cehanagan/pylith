// -*- C++ -*-
//
// ======================================================================
//
//                           Brad T. Aagaard
//                        U.S. Geological Survey
//
// {LicenseText}
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application elasticityexplicit.

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

const double pylith::feassemble::ElasticityExplicitData2DLinear::_vertices[] = {
  2.00000000e-01, -4.00000000e-01,
  3.00000000e-01,  5.00000000e-01,
 -1.00000000e+00, -2.00000000e-01,
};

const int pylith::feassemble::ElasticityExplicitData2DLinear::_cells[] = {
0,1,2,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_quadPts[] = {
  3.33333333e-01,  3.33333333e-01,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_quadWts[] = {
  5.00000000e-01,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_basis[] = {
  3.33333333e-01,  3.33333333e-01,
  3.33333333e-01,};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_basisDeriv[] = {
 -1.00000000e+00, -1.00000000e+00,
  1.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  1.00000000e+00,
};

const double pylith::feassemble::ElasticityExplicitData2DLinear::_fieldTpdt[] = {
  1.90000000e+00, -9.00000000e-01,
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
 -4.45506111e+10, -3.13529028e+10,
  3.95993889e+10,  4.94709722e+09,
  4.94938889e+09,  2.63970972e+10,
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
  vertices = const_cast<double*>(_vertices);
  cells = const_cast<int*>(_cells);
  quadPts = const_cast<double*>(_quadPts);
  quadWts = const_cast<double*>(_quadWts);
  basis = const_cast<double*>(_basis);
  basisDeriv = const_cast<double*>(_basisDeriv);
  fieldTpdt = const_cast<double*>(_fieldTpdt);
  fieldT = const_cast<double*>(_fieldT);
  fieldTmdt = const_cast<double*>(_fieldTmdt);
  valsResidual = const_cast<double*>(_valsResidual);
  valsJacobian = const_cast<double*>(_valsJacobian);
} // constructor

pylith::feassemble::ElasticityExplicitData2DLinear::~ElasticityExplicitData2DLinear(void)
{}


// End of file
