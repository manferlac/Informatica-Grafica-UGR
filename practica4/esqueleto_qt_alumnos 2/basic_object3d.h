/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#ifndef BASIC_OBJECT3D_H
#define BASIC_OBJECT3D_H

#include <vector>
#ifdef __APPLE__
    #include "TargetConditionals.h"
    #ifdef TARGET_OS_MAC
        #include <GLUT/glut.h>
        #include <OpenGL/OpenGL.h>
    #endif
#elif defined _WIN32 || defined _WIN64
        #include <GL/glew.h>
        #include <GL/gl.h>
#endif
#include "colors.h"
#include "vertex.h"
#include <math.h>

class _basic_object3D
{
  public:
  vector<_vertex3f> Vertices;

  void draw_point();
};

#endif
