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

#include <portinfo>

#include "MeshIOSieve.hh" // implementation of class methods

#include "petscmesh.hh"

#include "MeshBuilder.hh" // USES MeshBuilder
#include "pylith/topology/Mesh.hh" // USES Mesh

#include <stdexcept> // USES std::runtime_error

// ----------------------------------------------------------------------
// Constructor
pylith::meshio::MeshIOSieve::MeshIOSieve(void) :
  _filename("")
{ // constructor
} // constructor

// ----------------------------------------------------------------------
// Destructor
pylith::meshio::MeshIOSieve::~MeshIOSieve(void)
{ // destructor
  deallocate();
} // destructor

// ----------------------------------------------------------------------
// Deallocate PETSc and local data structures.
void
pylith::meshio::MeshIOSieve::deallocate(void)
{ // deallocate
  MeshIO::deallocate();
} // deallocate
  
// ----------------------------------------------------------------------
// Read mesh.
void
pylith::meshio::MeshIOSieve::_read(void)
{ // _read
  _mesh->createSieveMesh(3);
  const ALE::Obj<topology::Mesh::SieveMesh>& sieveMesh = _mesh->sieveMesh();
  assert(!sieveMesh.isNull());

  ALE::Obj<topology::Mesh::SieveMesh::sieve_type> sieve = 
    new topology::Mesh::SieveMesh::sieve_type(_mesh->comm());
  sieveMesh->setSieve(sieve);
  ALE::MeshSerializer::loadMesh(_filename, *sieveMesh);
} // read

// ----------------------------------------------------------------------
// Write mesh to file.
void
pylith::meshio::MeshIOSieve::_write(void) const
{ // write
  ALE::MeshSerializer::writeMesh(_filename, *_mesh->sieveMesh());
} // write

  
// End of file 
