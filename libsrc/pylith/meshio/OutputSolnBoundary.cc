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

#include <portinfo>

#include "OutputSolnBoundary.hh" // implementation of class methods

#include "pylith/topology/Field.hh" // USES Field
#include "pylith/topology/Mesh.hh" // USES Mesh

#include "pylith/utils/journals.hh" // USES PYLITH_COMPONENT_*
#include "pylith/utils/error.hh" // USES PYLITH_METHOD_BEGIN/END

// ---------------------------------------------------------------------------------------------------------------------
// Constructor
pylith::meshio::OutputSolnBoundary::OutputSolnBoundary(void) :
    _label(""),
    _boundaryMesh(NULL) {
    PyreComponent::setName("outputsolnboundary");
} // constructor


// ---------------------------------------------------------------------------------------------------------------------
// Destructor
pylith::meshio::OutputSolnBoundary::~OutputSolnBoundary(void) {
    deallocate();
} // destructor


// ---------------------------------------------------------------------------------------------------------------------
// Deallocate PETSc and local data structures.
void
pylith::meshio::OutputSolnBoundary::deallocate(void) {
    PYLITH_METHOD_BEGIN;

    OutputSoln::deallocate();

    delete _boundaryMesh;_boundaryMesh = NULL;

    PYLITH_METHOD_END;
} // deallocate


// ---------------------------------------------------------------------------------------------------------------------
// Set label identifier for subdomain.
void
pylith::meshio::OutputSolnBoundary::setLabel(const char* value) {
    PYLITH_METHOD_BEGIN;

    _label = value;

    PYLITH_METHOD_END;
} // setLabel


// ---------------------------------------------------------------------------------------------------------------------
// Verify configuration is acceptable.
void
pylith::meshio::OutputSolnBoundary::verifyConfiguration(const pylith::topology::Field& solution) const {
    PYLITH_METHOD_BEGIN;
    PYLITH_COMPONENT_DEBUG("verifyConfiguration(solution="<<solution.label()<<")");

    OutputSoln::verifyConfiguration(solution);

    PetscDM dmMesh = solution.dmMesh();assert(dmMesh);
    PetscBool hasLabel = PETSC_FALSE;
    PetscErrorCode err = DMHasLabel(dmMesh, _label.c_str(), &hasLabel);PYLITH_CHECK_ERROR(err);
    if (!hasLabel) {
        std::ostringstream msg;
        msg << "Mesh missing group of vertices '" << _label << " for output using solution boundary observer '"
            << PyreComponent::getIdentifier() << "'.";
        throw std::runtime_error(msg.str());
    } // if

    PYLITH_METHOD_END;
} // verifyConfiguration


// ---------------------------------------------------------------------------------------------------------------------
// Write data for step in solution.
void
pylith::meshio::OutputSolnBoundary::_writeSolnStep(const PylithReal t,
                                                   const PylithInt tindex,
                                                   const pylith::topology::Field& solution) {
    PYLITH_METHOD_BEGIN;
    PYLITH_COMPONENT_DEBUG("_writeSolnStep(t="<<t<<", tindex="<<tindex<<", solution="<<solution.label()<<")");

    if (!_boundaryMesh) {
        _boundaryMesh = new pylith::topology::Mesh(solution.mesh(), _label.c_str());assert(_boundaryMesh);
    } // if

    const pylith::string_vector& subfieldNames = _expandSubfieldNames(solution);

    _openSolnStep(t, *_boundaryMesh);
    const size_t numSubfieldNames = subfieldNames.size();
    for (size_t iField = 0; iField < numSubfieldNames; iField++) {
        if (!solution.hasSubfield(subfieldNames[iField].c_str())) {
            std::ostringstream msg;
            msg << "Internal Error: Could not find field '" << subfieldNames[iField] << "' in solution for output.";
            throw std::runtime_error(msg.str());
        } // if

        pylith::topology::Field* fieldBuffer = _getBuffer(solution, subfieldNames[iField].c_str());assert(fieldBuffer);
        _appendField(t, fieldBuffer, *_boundaryMesh);
    } // for
    _closeSolnStep();

    PYLITH_METHOD_END;
} // _writeSolnStep


// End of file