/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
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

_cylinder::_cylinder(){
    EjesRotacion.resize(4);
    EjesRotacion[0]=_vertex2f(0.0,-0.5);
    EjesRotacion[1]=_vertex2f(0.5,-0.5);
    EjesRotacion[2]=_vertex2f(0.5,0.5);
    EjesRotacion[3]=_vertex2f(0.0,0.5);
}

