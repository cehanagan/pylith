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

/**
 * @file libsrc/topology/MeshOps.hh
 *
 * @brief Simple operations on a Mesh object.
 */

#if !defined(pylith_topology_meshops_hh)
#define pylith_topology_meshops_hh

#include "topologyfwd.hh" // forward declarations

#include "pylith/utils/array.hh" // USES int_array

#include "spatialdata/units/unitsfwd.hh" // forward declarations

class pylith::topology::MeshOps { // MeshOps
    friend class TestMeshOps; // unit testing

    // PUBLIC MEMBERS //////////////////////////////////////////////////////////////////////////////////////////////////
public:

    /** Nondimensionalize the finite-element mesh.
     *
     * @param mesh Finite-element mesh.
     * @param normalizer Nondimensionalizer.
     */
    static
    void nondimensionalize(Mesh* const mesh,
                           const spatialdata::units::Nondimensional& normalizer);

    /** Check topology of mesh.
     *
     * @param mesh Finite-element mesh.
     */
    static
    void checkTopology(const Mesh& mesh);

    /** Determine is mesh contains simplex cells (i.e., line, tri, tet).
     *
     * @returns True if mesh contains simplex cells.
     */
    static
    bool isSimplexMesh(const Mesh& mesh);

    /** Check to make sure material id of every cell matches the id of
     *  one of the materials.
     *
     * @param[in] mesh Finite-element mesh.
     * @param[in] materialIds Array of ids for all materials and interior interfaces.
     */
    static
    void checkMaterialIds(const Mesh& mesh,
                          pylith::int_array& materialIds);

    // NOT IMPLEMENTED /////////////////////////////////////////////////////////////////////////////////////////////////
private:

    MeshOps(void); ///< Not Implemented
    MeshOps(const MeshOps&); ///< Not implemented
    const MeshOps& operator=(const MeshOps&); ///< Not implemented

}; // MeshOps

#endif // pylith_topology_meshops_hh

// End of file
