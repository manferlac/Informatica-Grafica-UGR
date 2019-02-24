/*
* Prácticas de IG 
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
* 
* GPL 3
*/

#ifndef BRAZO2_H
#define BRAZO2_h

#include "brazo1.h"
#include "cube.h"

class _brazo2
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

  _brazo1 brazo1;
  _cube cubo;

};

#endif
