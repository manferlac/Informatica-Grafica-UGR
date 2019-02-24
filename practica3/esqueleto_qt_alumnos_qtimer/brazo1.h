/*
* Prácticas de IG 
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
* 
* GPL 3
*/

#ifndef BRAZO1_H
#define BRAZO1_h

#include "cable.h"
#include "cube.h"

class _brazo1
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

  _cable cable;
  _cube cubo;
};

#endif
