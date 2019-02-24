/*
* Prácticas de IG 
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
* 
* GPL 3
*/

#ifndef CABLE_H
#define CABLE_H

#include "cylinder.h"

class _cable
{
public:

  void create();
  void draw_point();
  void draw_line();
  void draw_fill();
  void draw_chess();

protected:
  float Height;
  float Width;

  _cylinder cilindro;
};

#endif
