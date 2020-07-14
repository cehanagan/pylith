// -*- C++ -*-
//
// ----------------------------------------------------------------------
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
// ----------------------------------------------------------------------
//

/** @file libsrc/faults/KinSrcTimeHistory.hh
 *
 * @brief C++ implementation of a time history data file slip time function.
 */

#if !defined(pylith_faults_kinsrctimehistory_hh)
#define pylith_faults_kinsrctimehistory_hh

// Include directives ---------------------------------------------------
#include "KinSrc.hh"

// KinSrcTimeHistory ------------------------------------------------------
/// @brief Slip function time history from a user-supplied text file.
class pylith::faults::KinSrcTimeHistory : public KinSrc {
    friend class TestKinSrcTimeHistory; // unit testing

    // PUBLIC METHODS ///////////////////////////////////////////////////////
public:

    /// Default constructor.
    KinSrcTimeHistory(void);

    /// Destructor.
    ~KinSrcTimeHistory(void);

    /** Set time history database.
     *
     * @param[in] db Time history database.
     */
    void setTimeHistoryDB(spatialdata::spatialdb::TimeHistory* th);

    /** Get time history database.
     *
     * @preturns Time history database.
     */
    const spatialdata::spatialdb::TimeHistory* getTimeHistoryDB(void);

    /** Set slip subfield in fault integrator's auxiliary field at time t.
     *
     * @param[out] auxField Fault integrator's auxiliary field.
     * @param[in] t Time t.
     * @param[in] timeScale Time scale for nondimensionalization..
     */
    void updateSlip(pylith::topology::Field* const auxField,
                    const PylithScalar t,
                    const PylithScalar timeScale);

    /** Slip time function kernel.
     *
     * The "solution" field s is ignored.
     *
     * @param[in] dim Spatial dimension.
     * @param[in] numS Number of registered subfields in solution field.
     * @param[in] numA Number of registered subfields in auxiliary field.
     * @param[in] sOff Offset of registered subfields in solution field [numS].
     * @param[in] sOff_x Offset of registered subfields in gradient of the solution field [numS].
     * @param[in] s Solution field with all subfields.
     * @param[in] s_t Time derivative of solution field.
     * @param[in] s_x Gradient of solution field.
     * @param[in] aOff Offset of registered subfields in auxiliary field [numA]
     * @param[in] aOff_x Offset of registered subfields in gradient of auxiliary field [numA]
     * @param[in] a Auxiliary field with all subfields.
     * @param[in] a_t Time derivative of auxiliary field.
     * @param[in] a_x Gradient of auxiliary field.
     * @param[in] t Time for residual evaluation.
     * @param[in] x Coordinates of point evaluation.
     * @param[in] numConstants Number of registered constants.
     * @param[in] constants Array of registered constants.
     * @param[out] slip [dim].
     */
    static
    void slipFn(const PylithInt dim,
                const PylithInt numS,
                const PylithInt numA,
                const PylithInt sOff[],
                const PylithInt sOff_x[],
                const PylithScalar s[],
                const PylithScalar s_t[],
                const PylithScalar s_x[],
                const PylithInt aOff[],
                const PylithInt aOff_x[],
                const PylithScalar a[],
                const PylithScalar a_t[],
                const PylithScalar a_x[],
                const PylithReal t,
                const PylithScalar x[],
                const PylithInt numConstants,
                const PylithScalar constants[],
                PylithScalar slip[]);

    // PROTECTED METHODS //////////////////////////////////////////////////
protected:

    /** Setup auxiliary subfields (discretization and query fns).
     *
     * @param[in] normalizer Normalizer for nondimensionalizing values.
     * @param[in] cs Coordinate system for problem.
     */
    void _auxiliaryFieldSetup(const spatialdata::units::Nondimensional& normalizer,
                        const spatialdata::geocoords::CoordSys* cs);

    /** Set kernel for slip time function.
     *
     * @param[in] auxField Auxiliary field for fault with prescribed slip.
     */
    void _setSlipFnKernel(const pylith::topology::Field& auxField) const;

    // PRIVATE MEMBERS /////////////////////////////////////////////////////////////////////////////////////////////////
private:

    spatialdata::spatialdb::TimeHistory* _dbTimeHistory; ///< Time history database.

    // NOT IMPLEMENTED //////////////////////////////////////////////////////
private:

    KinSrcTimeHistory(const KinSrcTimeHistory&); ///< Not implemented
    const KinSrcTimeHistory& operator=(const KinSrcTimeHistory&); ///< Not implemented

}; // class KinSrcTimeHistory

#endif // pylith_faults_kinsrctimehistory_hh

// End of file