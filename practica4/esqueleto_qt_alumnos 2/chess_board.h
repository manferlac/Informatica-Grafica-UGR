/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include "object3d.h"

class _chess_board:public _object3D
{
public:
  void create(float Size=1.0, unsigned int Divisions1=1);

protected:
  void generarVertices();
  void generarTriangulos();
  unsigned int Divisions;

  float x_ini = -5;
  float y_ini = -5;
  float x_fin = 5;
  float y_fin = 5;

  float lado_x;
  float lado_y;
  float tam_cuadrado_x;
  float tam_cuadrado_y;
};

#endif
