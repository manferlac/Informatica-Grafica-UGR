/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#ifndef OBJECTPLY_H
#define OBJECTPLY_H

#include "object3d.h"

class _object_ply:public _object3D
{
public:
  _object_ply();
  void create(vector <float> vert, vector <unsigned int> trian);
};

#endif
