/*
* Prácticas de IG 
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
* 
* GPL 3
*/

#ifndef PIE_H
#define PIE_h

#include "cube.h"

class _pie
{
public:

  void create();
  void draw_point();
  void draw_line();
  void draw_fill();
  void draw_chess();

protected:
  float Lenght;
  float Width;

  _cube cubo;
};

#endif
