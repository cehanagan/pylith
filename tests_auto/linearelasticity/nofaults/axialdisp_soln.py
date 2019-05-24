#!/usr/bin/env python
#
# ----------------------------------------------------------------------
#
# Brad T. Aagaard, U.S. Geological Survey
# Charles A. Williams, GNS Science
# Matthew G. Knepley, University of Chicago
#
# This code was developed as part of the Computational Infrastructure
# for Geodynamics (http://geodynamics.org).
#
# Copyright (c) 2010-2018 University of California, Davis
#
# See COPYING for license information.
#
# ----------------------------------------------------------------------
#

# @file tests_auto/linearelasticity/nofaults/axialdisp_soln.py
##
# @brief Analytical solution to axial displacement problem.

# 2-D axial compression test with linear quadrilateral cells.
##
# Uy=-a
# ----------
# |        |
# Ux=-b    |        |
# |        |
# |        |
# ----------
# Uy=+a
##
# Dirichlet boundary conditions
# Ux(x,0) = b
# Uy(-4000,y) = -a
# Uy(+4000,y) = +a

import numpy


# Physical properties
p_density = 2500.0
p_vs = 3000.0
p_vp = 5291.502622129181

p_mu = p_density * p_vs**2
p_lambda = p_density * p_vp**2 - 2 * p_mu

# Uniform stress field (plane strain)
sxx = 1.0e+7
sxy = 0.0
syy = 0.0
szz = p_lambda / (2 * p_lambda + 2 * p_mu) * (sxx + syy)

# Uniform strain field
exx = 1.0 / (2 * p_mu) * (sxx - p_lambda / (3 * p_lambda + 2 * p_mu) * (sxx + syy + szz))
eyy = 1.0 / (2 * p_mu) * (syy - p_lambda / (3 * p_lambda + 2 * p_mu) * (sxx + syy + szz))
ezz = 1.0 / (2 * p_mu) * (szz - p_lambda / (3 * p_lambda + 2 * p_mu) * (sxx + syy + szz))

exy = 1.0 / (2 * p_mu) * (sxy)

#print exx,eyy,exy,ezz
#print -exx*p_lambda/(p_lambda+2*p_mu)

# ----------------------------------------------------------------------


class AnalyticalSoln(object):
    """
    Analytical solution to axial/shear displacement problem.
    """
    SPACE_DIM = 2
    TENSOR_SIZE = 3

    def __init__(self):
        self.fields = {
            "displacement": self.displacement,
            "cauchy_strain": self.cauchy_strain,
            "cauchy_stress": self.cauchy_stress,
        }
        return

    def getField(self, name, pts):
        return self.fields[name](pts)

    def displacement(self, locs):
        """
        Compute displacement field at locations.
        """
        (npts, dim) = locs.shape
        disp = numpy.zeros((1, npts, self.SPACE_DIM), dtype=numpy.float64)
        disp[0, :, 0] = exx * locs[:, 0] + exy * locs[:, 1]
        disp[0, :, 1] = eyy * locs[:, 1] + exy * locs[:, 0]
        return disp

    def cauchy_strain(self, locs):
        """
        Compute strain field at locations.
        """
        (npts, dim) = locs.shape
        strain = numpy.zeros((1, npts, self.TESNSOR_SIZE), dtype=numpy.float64)
        strain[0, :, 0] = exx
        strain[0, :, 1] = eyy
        strain[0, :, 2] = exy
        return strain

    def cauchy_stress(self, locs):
        """
        Compute stress field at locations.
        """
        (npts, dim) = locs.shape
        stress = numpy.zeros((1, npts, self.TENSOR_SIZE), dtype=numpy.float64)
        stress[0, :, 0] = sxx
        stress[0, :, 1] = syy
        stress[0, :, 2] = sxy
        return stress


# End of file
