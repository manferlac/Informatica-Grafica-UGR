/*
* Prácticas de IG 
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
* 
* GPL 3
*/

#ifndef PLATAFORMA_H
#define PLATAFORMA_h

#include "brazo2.h"
#include "contrapeso.h"
#include "cabina.h"
#include "cube.h"

class _plataforma
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

  _brazo2 brazo2;
  _contrapeso contrapeso;
  _cabina cabina;
  _cube cubo;


};

#endif
