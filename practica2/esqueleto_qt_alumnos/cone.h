/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#ifndef CONE_H
#define CONE_H

#include "object3d_sweep_basic.h"

class _cone:public _object3d_sweep_basic
{
public:
  void create(unsigned int divisionesHorizontales);
};

#endif
