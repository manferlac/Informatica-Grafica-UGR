/*
* Practicas de IG
* Domingo Martin Perandres© 2014-2018
* dmartin@ugr.es
*
* GPL 3
*/

#ifndef BASIC_OBJECT3D_H
#define BASIC_OBJECT3D_H

#ifdef __APPLE__
    #include "TargetConditionals.h"
    #ifdef TARGET_OS_MAC
        #include <GLUT/glut.h>
        #include <OpenGL/OpenGL.h>
    #endif
#else
        #include <GL/glew.h>
        #include <GL/gl.h>
#endif
#include <vector>
#include "colors.h"
#include "vertex.h"

class _basic_object3D
{
  public:
  vector<_vertex3f> Vertices;

  void draw_point();
};

#endif
