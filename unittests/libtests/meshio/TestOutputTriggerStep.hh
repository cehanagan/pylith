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

/**
 * @file unittests/libtests/meshio/TestOutputTriggerStep.hh
 *
 * @brief C++ TestOutputTriggerStep object.
 *
 * C++ unit testing for Observers of solution.
 */

#if !defined(pylith_meshio_testoutputtriggerstep_hh)
#define pylith_meshio_testoutputtriggerstep_hh

#include <cppunit/extensions/HelperMacros.h>

#include "pylith/meshio/meshiofwd.hh" // HOLDSA OutputTriggerStep

/// Namespace for pylith package
namespace pylith {
    namespace meshio {
        class TestOutputTriggerStep;
    } // meshio
} // pylith

class pylith::meshio::TestOutputTriggerStep : public CppUnit::TestFixture {
    // CPPUNIT TEST SUITE //////////////////////////////////////////////////////////////////////////////////////////////
    CPPUNIT_TEST_SUITE(TestOutputTriggerStep);

    CPPUNIT_TEST(testNumStepsSkip);
    CPPUNIT_TEST(testShouldWrite);

    CPPUNIT_TEST_SUITE_END();

    // PUBLIC METHODS //////////////////////////////////////////////////////////////////////////////////////////////////
public:

    /// Test setNumStepsSkip() and getNumStepsSkip().
    void testNumStepsSkip(void);

    /// Test shouldWrite().
    void testShouldWrite(void);

}; // class TestOutputTriggerStep

#endif // pylith_meshio_testoutputtriggerstep_hh

// End of file
