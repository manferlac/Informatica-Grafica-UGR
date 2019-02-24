/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "object_ply.h"

/**
*
*@param
*@returns
*/

void _object_ply::create(vector <float> vert, vector <unsigned int> trian)
{
    Vertices.resize(vert.size());
        int auxVertices = 0;
        for(int i = 0; i < vert.size(); i+=3){
        Vertices[auxVertices] = _vertex3f(vert[i], vert[i+1], vert[i+2]);
        auxVertices++;
        }

        Triangles.resize(trian.size());
        int auxTriangulos = 0;
        for(int i = 0; i < trian.size(); i+=3){
        Triangles[auxTriangulos] = _vertex3ui(trian[i], trian[i+1], trian[i+2]);
        auxTriangulos++;
        }

        compute_triangles_normals();
        compute_vertices_normals();
}
