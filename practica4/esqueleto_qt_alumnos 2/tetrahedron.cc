/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "tetrahedron.h"

/**
*
*@param
*@returns
*/

_tetrahedron::_tetrahedron(float Size)
{
  Vertices.resize(4);

  Vertices[0]=_vertex3f(-Size/2,-Size/2,-Size/2);
  Vertices[1]=_vertex3f(0,-Size/2,Size/2);
  Vertices[2]=_vertex3f(Size/2,-Size/2,-Size/2);
  Vertices[3]=_vertex3f(0,Size/2,0);

  Triangles.resize(4);

  Triangles[0]=_vertex3ui(0,1,3);
  Triangles[1]=_vertex3ui(1,2,3);
  Triangles[2]=_vertex3ui(2,0,3);
  Triangles[3]=_vertex3ui(0,2,1);

  Vertices_texture_coordinates.resize(3*Triangles.size());
  for (unsigned int i=0;i<Triangles.size();i++){
    Vertices_texture_coordinates[3*i]=_vertex2f(0,0);
    Vertices_texture_coordinates[3*i+1]=_vertex2f(1,0);
    Vertices_texture_coordinates[3*i+2]=_vertex2f(0.5,1);
  }

  compute_triangles_normals();
  compute_vertices_normals();
}

