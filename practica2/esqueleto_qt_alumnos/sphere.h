/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#ifndef SPHERE_H
#define SPHERE_H

#include "object3d_sweep_basic.h"
#include <math.h>

class _sphere:public _object3d_sweep_basic
{
public:
  void create(unsigned int divisionesHorizontales, unsigned int divisionesVerticales);
};

#endif
