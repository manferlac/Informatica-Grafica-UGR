/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "cone.h"

/**
*
*@param
*@returns
*/

void _cone::create(unsigned int divisionesHorizontales){
    Num_horizontal_divisions = divisionesHorizontales;
    vector<_vertex2f> vert;

    vert.resize(3);
    vert[0]=_vertex2f(0.0,0.5);
    vert[1]=_vertex2f(0.5,-0.5);
    vert[2]=_vertex2f(0.0,-0.5);

    _object3d_sweep_basic::create(vert,Num_horizontal_divisions);

}

