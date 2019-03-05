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

#include <portinfo>

#include "TestObserversPhysics.hh" // Implementation of class methods

#include "pylith/problems/ObserversPhysics.hh" // USES ObserversPhysics
#include "pylith/problems/ObserverPhysicsStub.hh" // USES ObserverPhysicsStub
#include "pylith/topology/Mesh.hh" // USES Mesh
#include "pylith/topology/Field.hh" // USES Field

namespace pylith {
    namespace problems {
        class _TestObserversPhysics {
public:

            static ObserverPhysicsStub observerA;
            static ObserverPhysicsStub observerB;
        }; // _TestObserversPhysics
        ObserverPhysicsStub _TestObserversPhysics::observerA;
        ObserverPhysicsStub _TestObserversPhysics::observerB;
    } // problems
} // pylith

// ---------------------------------------------------------------------------------------------------------------------
CPPUNIT_TEST_SUITE_REGISTRATION(pylith::problems::TestObserversPhysics);

// ---------------------------------------------------------------------------------------------------------------------
// Setup testing data.
void
pylith::problems::TestObserversPhysics::setUp(void) {
    _observers = new ObserversPhysics();CPPUNIT_ASSERT(_observers);
    _observers->registerObserver(&_TestObserversPhysics::observerA);
    _observers->registerObserver(&_TestObserversPhysics::observerB);
} // setUp


// ---------------------------------------------------------------------------------------------------------------------
// Tear down testing data.
void
pylith::problems::TestObserversPhysics::tearDown(void) {
    delete _observers;_observers = NULL;
} // tearDown


// ---------------------------------------------------------------------------------------------------------------------
// Test registerObserver().
void
pylith::problems::TestObserversPhysics::testRegisterObserver(void) {
    CPPUNIT_ASSERT(_observers);
    CPPUNIT_ASSERT_EQUAL(size_t(1), _observers->_observers.count(&_TestObserversPhysics::observerA));
    CPPUNIT_ASSERT_EQUAL(size_t(1), _observers->_observers.count(&_TestObserversPhysics::observerB));
} // testRegisterObserver


// ---------------------------------------------------------------------------------------------------------------------
// Test removeObserver().
void
pylith::problems::TestObserversPhysics::testRemoveObserver(void) {
    CPPUNIT_ASSERT(_observers);
    CPPUNIT_ASSERT_EQUAL(size_t(1), _observers->_observers.count(&_TestObserversPhysics::observerA));
    CPPUNIT_ASSERT_EQUAL(size_t(1), _observers->_observers.count(&_TestObserversPhysics::observerB));

    _observers->removeObserver(&_TestObserversPhysics::observerA);
    CPPUNIT_ASSERT_EQUAL(size_t(0), _observers->_observers.count(&_TestObserversPhysics::observerA));
    CPPUNIT_ASSERT_EQUAL(size_t(1), _observers->_observers.count(&_TestObserversPhysics::observerB));

    _observers->removeObserver(&_TestObserversPhysics::observerB);
    CPPUNIT_ASSERT_EQUAL(size_t(0), _observers->_observers.count(&_TestObserversPhysics::observerA));
    CPPUNIT_ASSERT_EQUAL(size_t(0), _observers->_observers.count(&_TestObserversPhysics::observerB));
} // testRegisterObserver


// ---------------------------------------------------------------------------------------------------------------------
// Test setPhysicsImplementation().
void
pylith::problems::TestObserversPhysics::testSetPhysicsImplementation(void) {
    CPPUNIT_ASSERT_MESSAGE(":TODO: @brad Implement test.", false);
} // testSetPhysicsImplementation


// ---------------------------------------------------------------------------------------------------------------------
// Test verifyObservers().
void
pylith::problems::TestObserversPhysics::testVerifyObservers(void) {
    CPPUNIT_ASSERT(_observers);
    try {
        pylith::topology::Mesh mesh;
        pylith::topology::Field solution(mesh);
        _observers->verifyObservers(solution);
    } catch (ObserverPhysicsStubException err) {
        CPPUNIT_ASSERT_EQUAL(ObserverPhysicsStubException::VERIFIED, err.getMethodCalled());
    } // try/catch
} // testVerifyObservers


// ---------------------------------------------------------------------------------------------------------------------
// Test notifyObservers().
void
pylith::problems::TestObserversPhysics::testNotifyObservers(void) {
    CPPUNIT_ASSERT(_observers);
    try {
        const PylithReal t = 1.0;
        const PylithInt tindex = 1;
        pylith::topology::Mesh mesh;
        pylith::topology::Field solution(mesh);
        _observers->notifyObservers(t, tindex, solution, true);
        _observers->notifyObservers(t, tindex, solution, false);
    } catch (ObserverPhysicsStubException err) {
        CPPUNIT_ASSERT_EQUAL(ObserverPhysicsStubException::UPDATED, err.getMethodCalled());
    } // try/catch
} // testNotifyObservers


// End of file
