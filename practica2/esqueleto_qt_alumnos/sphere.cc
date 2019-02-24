/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "sphere.h"

/**
*
*@param
*@returns
*/


void _sphere::create(unsigned int divisionesHorizontales, unsigned int divisionesVerticales){
    Num_vertical_divisions = divisionesVerticales;
    Num_horizontal_divisions = divisionesHorizontales;
    float angulo_ini = -0.5*M_PI;
    float angulo_fin =  0.5*M_PI;
    float angulo = M_PI/Num_vertical_divisions;
    float x,y;
    float radio = 0.5;
    vector<_vertex2f> vert;
    vert.resize(Num_vertical_divisions);
    //inserción primer punto
    vert[0] = _vertex2f(0,-radio);

    //insercion puntos intermedios
    for(int i = 1; i<=Num_vertical_divisions; i++){
        x = radio*cos(angulo_ini + angulo*i);
        y = radio*sin(angulo_ini + angulo*i);

        vert[i] = _vertex2f(x,y);
    }

    //insercion ultimo punto
    vert[vert.size()-1] = _vertex2f(0,radio);

    _object3d_sweep_basic::create(vert,Num_horizontal_divisions);
}
