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
// Copyright (c) 2010-2015 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

#if !defined(pylith_materials_isotropiclinearelasticityplanestraindata_hh)
#define pylith_materials_isotropiclinearelasticityplanestraindata_hh

#include "pylith/utils/types.hh" // HASA PylithScalar
#include "pylith/topology/Field.hh" // HASA FieldBase::Discretization

#include "petscds.h" // USES PetscPointFunc, PetsPointJac

namespace pylith {
  namespace materials {
     class IsotropicLinearElasticityPlaneStrainData;
  } // pylith
} // materials

class pylith::materials::IsotropicLinearElasticityPlaneStrainData
{

// PUBLIC METHODS ///////////////////////////////////////////////////////
public :
  
  /// Constructor
  IsotropicLinearElasticityPlaneStrainData(void);

  /// Destructor
  ~IsotropicLinearElasticityPlaneStrainData(void);

// PUBLIC MEMBERS ///////////////////////////////////////////////////////
public:

  // Test input data

  char* filenameMesh; ///< Name of file with ASCII mesh.
  char* label; ///< Material label.
  int id; ///< Material id.
  int dimension; ///< Dimension of material.

  bool useInertia; ///< Test uses inertia.
  bool useBodyForce; ///< Test uses body force.

  int numSolnFields; ///< Number of solution fields.
  topology::Field::DiscretizeInfo* discretizations; ///< Discretizations for solution fields.

  char* filenameAuxFieldsDB; ///< Name of file with data for auxFieldsDB.

  PetscPointFunc* residualKernels;
  PetscPointJac* jacobianKernels;

  // :TODO: Add input data for integrateResidual(), integrateJacobian(), updateStateVars()
  // :TODO: Add auxiliary field data
  // :TODO: Add solution field data

  // Verified data

  int numAuxFields; ///< Number of subfields in auxiliary field.
  topology::Field::SubfieldInfo* auxSubfields; ///< Subfields in auxiliary field.
  PylithScalar* auxFields; ///< Array of auxiliary field data.

  // :TODO: Add spatial database values for testing _dbToAuxFields()

  // :TODO: Add verified data for integrateResidual(), integrateJacobian(), updateStateVars()
  // :TODO: Add residual data
  // :TODO: Add Jacobian data

  PylithReal lengthScale; ///< Length scale for nondimensionalization.
  PylithReal timeScale; ///< Time scale for nondimensionalization.
  PylithReal pressureScale; ///< Pressure scale for nondimensionalization.
  PylithReal densityScale; ///< Density scale for nondimensionalization.

};

#endif // pylith_materials_materialdata_hh

// End of file