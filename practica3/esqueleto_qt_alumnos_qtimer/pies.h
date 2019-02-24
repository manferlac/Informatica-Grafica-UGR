/*
* Prácticas de IG 
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
* 
* GPL 3
*/

#ifndef PIES_H
#define PIES_h

#include "base.h"
#include "pie.h"

class _pies
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

  _pie pie;
  _base base;
};

#endif
