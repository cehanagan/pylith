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
// Copyright (c) 2010-2017 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application quadratureapp.

#include "QuadratureData3DQuadratic.hh"

const int pylith::feassemble::QuadratureData3DQuadratic::_numVertices = 10;

const int pylith::feassemble::QuadratureData3DQuadratic::_spaceDim = 3;

const int pylith::feassemble::QuadratureData3DQuadratic::_numCells = 1;

const int pylith::feassemble::QuadratureData3DQuadratic::_cellDim = 3;

const int pylith::feassemble::QuadratureData3DQuadratic::_numBasis = 10;

const int pylith::feassemble::QuadratureData3DQuadratic::_numQuadPts = 4;

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_vertices[] = {
 -5.00000000e-01, -2.00000000e+00, -1.00000000e+00,
  2.00000000e+00, -2.00000000e+00, -5.00000000e-01,
  1.00000000e+00,  1.00000000e+00,  0.00000000e+00,
  2.00000000e-01,  5.00000000e-01,  2.00000000e+00,
  1.50000000e+00, -5.00000000e-01, -2.50000000e-01,
  2.50000000e-01, -5.00000000e-01, -5.00000000e-01,
  7.50000000e-01, -2.00000000e+00, -7.50000000e-01,
 -1.50000000e-01, -7.50000000e-01,  5.00000000e-01,
  1.10000000e+00, -7.50000000e-01,  7.50000000e-01,
  6.00000000e-01,  7.50000000e-01,  1.00000000e+00,
};

const int pylith::feassemble::QuadratureData3DQuadratic::_cells[] = {
       0,       1,       2,       3,       4,       5,       6,       7,       8,       9,
};

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_verticesRef[] = {
 -1.00000000e+00, -1.00000000e+00, -1.00000000e+00,
  1.00000000e+00, -1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00,  1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00, -1.00000000e+00,  1.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -1.00000000e+00,
 -1.00000000e+00,  0.00000000e+00, -1.00000000e+00,
  0.00000000e+00, -1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00, -1.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -1.00000000e+00,  0.00000000e+00,
 -1.00000000e+00,  0.00000000e+00,  0.00000000e+00,
};

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_quadPtsRef[] = {
 -8.00000000e-01, -8.00000000e-01, -8.00000000e-01,
  5.00000000e-01, -8.00000000e-01, -8.00000000e-01,
 -8.00000000e-01,  5.00000000e-01, -8.00000000e-01,
 -8.00000000e-01, -8.00000000e-01,  5.00000000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_quadWts[] = {
  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,
};

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_quadPts[] = {
 -3.00000000e-02, -1.45000000e+00, -5.50000000e-01,
  1.59500000e+00, -1.45000000e+00, -2.25000000e-01,
  9.45000000e-01,  5.00000000e-01,  1.00000000e-01,
  4.25000000e-01,  1.75000000e-01,  1.40000000e+00,
};

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_basis[] = {
  2.80000000e-01, -8.00000000e-02, -8.00000000e-02,
 -8.00000000e-02,  4.00000000e-02,  2.80000000e-01,
  2.80000000e-01,  2.80000000e-01,  4.00000000e-02,
  4.00000000e-02, -4.50000000e-02,  3.75000000e-01,
 -8.00000000e-02, -8.00000000e-02,  3.00000000e-01,
  2.00000000e-02,  1.50000000e-01,  2.00000000e-02,
  3.00000000e-01,  4.00000000e-02, -4.50000000e-02,
 -8.00000000e-02,  3.75000000e-01, -8.00000000e-02,
  3.00000000e-01,  1.50000000e-01,  2.00000000e-02,
  2.00000000e-02,  4.00000000e-02,  3.00000000e-01,
 -4.50000000e-02, -8.00000000e-02, -8.00000000e-02,
  3.75000000e-01,  4.00000000e-02,  2.00000000e-02,
  2.00000000e-02,  1.50000000e-01,  3.00000000e-01,
  3.00000000e-01,};

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_basisDerivRef[] = {
 -9.00000000e-01, -9.00000000e-01, -9.00000000e-01,
 -3.00000000e-01,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -3.00000000e-01,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -3.00000000e-01,
  2.00000000e-01,  2.00000000e-01,  0.00000000e+00,
 -2.00000000e-01,  1.20000000e+00, -2.00000000e-01,
  1.20000000e+00, -2.00000000e-01, -2.00000000e-01,
 -2.00000000e-01, -2.00000000e-01,  1.20000000e+00,
  2.00000000e-01,  0.00000000e+00,  2.00000000e-01,
  0.00000000e+00,  2.00000000e-01,  2.00000000e-01,
  4.00000000e-01,  4.00000000e-01,  4.00000000e-01,
  1.00000000e+00,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -3.00000000e-01,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -3.00000000e-01,
  2.00000000e-01,  1.50000000e+00,  0.00000000e+00,
 -2.00000000e-01, -1.00000000e-01, -2.00000000e-01,
 -1.40000000e+00, -1.50000000e+00, -1.50000000e+00,
 -2.00000000e-01, -2.00000000e-01, -1.00000000e-01,
  2.00000000e-01,  0.00000000e+00,  1.50000000e+00,
  0.00000000e+00,  2.00000000e-01,  2.00000000e-01,
  4.00000000e-01,  4.00000000e-01,  4.00000000e-01,
 -3.00000000e-01,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  1.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00, -3.00000000e-01,
  1.50000000e+00,  2.00000000e-01,  0.00000000e+00,
 -1.50000000e+00, -1.40000000e+00, -1.50000000e+00,
 -1.00000000e-01, -2.00000000e-01, -2.00000000e-01,
 -2.00000000e-01, -2.00000000e-01, -1.00000000e-01,
  2.00000000e-01,  0.00000000e+00,  2.00000000e-01,
  0.00000000e+00,  2.00000000e-01,  1.50000000e+00,
  4.00000000e-01,  4.00000000e-01,  4.00000000e-01,
 -3.00000000e-01,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -3.00000000e-01,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  1.00000000e+00,
  2.00000000e-01,  2.00000000e-01,  0.00000000e+00,
 -2.00000000e-01, -1.00000000e-01, -2.00000000e-01,
 -1.00000000e-01, -2.00000000e-01, -2.00000000e-01,
 -1.50000000e+00, -1.50000000e+00, -1.40000000e+00,
  1.50000000e+00,  0.00000000e+00,  2.00000000e-01,
  0.00000000e+00,  1.50000000e+00,  2.00000000e-01,
};

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_basisDeriv[] = {
 -6.58857980e-01, -1.68667643e-01, -3.05710102e-01,
 -2.28404100e-01,  1.33528551e-01, -5.79795022e-02,
 -4.39238653e-02, -2.51244510e-01,  2.19619327e-01,
  5.27086384e-02,  6.14934114e-02, -2.63543192e-01,
  1.81551977e-01,  7.84773060e-02, -1.07759883e-01,
  5.85651537e-02,  1.13499268e+00, -1.09282577e+00,
  9.19472914e-01, -6.60614934e-01,  2.02635432e-01,
 -3.92386530e-01, -3.24450952e-01,  1.16193265e+00,
  1.17130307e-01, -1.30014641e-01,  2.14348463e-01,
 -5.85651537e-03,  1.26500732e-01,  2.92825769e-02,
  2.92825769e-01,  7.49633968e-02,  1.35871157e-01,
  7.61346999e-01, -4.45095168e-01,  1.93265007e-01,
 -4.39238653e-02, -2.51244510e-01,  2.19619327e-01,
  5.27086384e-02,  6.14934114e-02, -2.63543192e-01,
  3.71888726e-01,  1.16720351e+00, -1.05944363e+00,
 -1.31771596e-01,  4.62664714e-02, -1.41142020e-01,
 -1.02196193e+00, -3.25622255e-01, -4.90190337e-01,
 -1.63982430e-01, -5.79795022e-02,  1.99121523e-02,
 -1.11273792e-01, -3.96486091e-01,  1.35636896e+00,
 -5.85651537e-03,  1.26500732e-01,  2.92825769e-02,
  2.92825769e-01,  7.49633968e-02,  1.35871157e-01,
 -2.28404100e-01,  1.33528551e-01, -5.79795022e-02,
  1.46412884e-01,  8.37481698e-01, -7.32064422e-01,
  5.27086384e-02,  6.14934114e-02, -2.63543192e-01,
  1.17130307e+00, -5.00146413e-01,  1.43484627e-01,
 -1.08345534e+00, -1.97364568e-01, -5.82723280e-01,
 -7.02781845e-02, -8.19912152e-02, -4.86090776e-02,
 -1.63982430e-01, -5.79795022e-02,  1.99121523e-02,
  1.17130307e-01, -1.30014641e-01,  2.14348463e-01,
 -2.34260615e-01, -1.39970717e-01,  1.17130307e+00,
  2.92825769e-01,  7.49633968e-02,  1.35871157e-01,
 -2.28404100e-01,  1.33528551e-01, -5.79795022e-02,
 -4.39238653e-02, -2.51244510e-01,  2.19619327e-01,
 -1.75695461e-01, -2.04978038e-01,  8.78477306e-01,
  1.81551977e-01,  7.84773060e-02, -1.07759883e-01,
 -1.31771596e-01,  4.62664714e-02, -1.41142020e-01,
 -7.02781845e-02, -8.19912152e-02, -4.86090776e-02,
 -1.11566618e+00, -3.01610542e-01, -4.21669107e-01,
  1.10688141e+00, -7.08638360e-01,  4.65592972e-01,
  1.84480234e-01,  1.21522694e+00, -9.22401171e-01,
};

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_jacobian[] = {
  1.25000000e+00,  7.50000000e-01,  3.50000000e-01,
  0.00000000e+00,  1.50000000e+00,  1.25000000e+00,
  2.50000000e-01,  5.00000000e-01,  1.50000000e+00,
  1.25000000e+00,  7.50000000e-01,  3.50000000e-01,
  4.44089210e-16,  1.50000000e+00,  1.25000000e+00,
  2.50000000e-01,  5.00000000e-01,  1.50000000e+00,
  1.25000000e+00,  7.50000000e-01,  3.50000000e-01,
  0.00000000e+00,  1.50000000e+00,  1.25000000e+00,
  2.50000000e-01,  5.00000000e-01,  1.50000000e+00,
  1.25000000e+00,  7.50000000e-01,  3.50000000e-01,
  0.00000000e+00,  1.50000000e+00,  1.25000000e+00,
  2.50000000e-01,  5.00000000e-01,  1.50000000e+00,
};

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_jacobianDet[] = {
  2.13437500e+00,  2.13437500e+00,  2.13437500e+00,  2.13437500e+00,
};

const PylithScalar pylith::feassemble::QuadratureData3DQuadratic::_jacobianInv[] = {
  7.61346999e-01, -4.45095168e-01,  1.93265007e-01,
  1.46412884e-01,  8.37481698e-01, -7.32064422e-01,
 -1.75695461e-01, -2.04978038e-01,  8.78477306e-01,
  7.61346999e-01, -4.45095168e-01,  1.93265007e-01,
  1.46412884e-01,  8.37481698e-01, -7.32064422e-01,
 -1.75695461e-01, -2.04978038e-01,  8.78477306e-01,
  7.61346999e-01, -4.45095168e-01,  1.93265007e-01,
  1.46412884e-01,  8.37481698e-01, -7.32064422e-01,
 -1.75695461e-01, -2.04978038e-01,  8.78477306e-01,
  7.61346999e-01, -4.45095168e-01,  1.93265007e-01,
  1.46412884e-01,  8.37481698e-01, -7.32064422e-01,
 -1.75695461e-01, -2.04978038e-01,  8.78477306e-01,
};

pylith::feassemble::QuadratureData3DQuadratic::QuadratureData3DQuadratic(void)
{ // constructor
  numVertices = _numVertices;
  spaceDim = _spaceDim;
  numCells = _numCells;
  cellDim = _cellDim;
  numBasis = _numBasis;
  numQuadPts = _numQuadPts;
  vertices = const_cast<PylithScalar*>(_vertices);
  cells = const_cast<int*>(_cells);
  verticesRef = const_cast<PylithScalar*>(_verticesRef);
  quadPtsRef = const_cast<PylithScalar*>(_quadPtsRef);
  quadWts = const_cast<PylithScalar*>(_quadWts);
  quadPts = const_cast<PylithScalar*>(_quadPts);
  basis = const_cast<PylithScalar*>(_basis);
  basisDerivRef = const_cast<PylithScalar*>(_basisDerivRef);
  basisDeriv = const_cast<PylithScalar*>(_basisDeriv);
  jacobian = const_cast<PylithScalar*>(_jacobian);
  jacobianDet = const_cast<PylithScalar*>(_jacobianDet);
  jacobianInv = const_cast<PylithScalar*>(_jacobianInv);
} // constructor

pylith::feassemble::QuadratureData3DQuadratic::~QuadratureData3DQuadratic(void)
{}


// End of file