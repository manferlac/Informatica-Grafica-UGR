/*
* Practicas de IG
* Domingo Martin Perandres© 2014-2018
* dmartin@ugr.es
*
* GPL 3
*/

#include "cylinder.h"

/**
*
*@param
*@returns
*/

void _cylinder::create(unsigned int Num_horizontal_divisions1,float Radius1, float Height1)
{
    Num_horizontal_divisions = Num_horizontal_divisions1;
    vector<_vertex2f> vert;

        vert.resize(4);
        vert[0]=_vertex2f(0.0,-0.5);
        vert[1]=_vertex2f(0.5,-0.5);
        vert[2]=_vertex2f(0.5,0.5);
        vert[3]=_vertex2f(0.0,0.5);

        _object3d_sweep_basic::create(vert,Num_horizontal_divisions);

        compute_triangles_normals();
        compute_vertices_normals();
}
