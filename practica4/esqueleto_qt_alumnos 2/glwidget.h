/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#ifndef GLWIDGET_H
#define GLWIDGET_H

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
#include <QOpenGLWidget>
#include <QKeyEvent>
#include <QTimer>
#include <QImage>
#include<QImageReader>

#include <iostream>
#include "vertex.h"
#include "colors.h"
#include "axis.h"
#include "tetrahedron.h"
#include "cone.h"
#include "cylinder.h"
#include "sphere.h"
#include "file_ply_stl.h"
#include "object_ply.h"
#include "level2.h"
#include "level3.h"
#include "chess_board.h"

namespace _gl_widget_ne {

  const float X_MIN=-.1;
  const float X_MAX=.1;
  const float Y_MIN=-.1;
  const float Y_MAX=.1;
  const float FRONT_PLANE_PERSPECTIVE=(X_MAX-X_MIN)/2;
  const float BACK_PLANE_PERSPECTIVE=1000;
  const float DEFAULT_DISTANCE=4;
  const float ANGLE_STEP=6;

  typedef enum {MODE_DRAW_POINT,MODE_DRAW_LINE,MODE_DRAW_FILL} _mode_draw;
  typedef enum {MODE_RENDERING_SOLID,MODE_RENDERING_SOLID_CHESS, MODE_RENDERING_ILLUMINATION_FLAT_SHADING, MODE_RENDERING_ILLUMINATION_SMOOTH_SHADING, MODE_RENDERING_TEXTURE, MODE_RENDERING_TEXTURE_ILLUMINATION_FLAT_SHADING, MODE_RENDERING_TEXTURE_ILLUMINATION_SMOOTH_SHADING} _mode_rendering;
  typedef enum {OBJECT_TETRAHEDRON,OBJECT_CUBE,OBJECT_CONE,OBJECT_CYLINDER,OBJECT_SPHERE,OBJECT_PLY,OBJECT_HIERARCHICAL,OBJECT_CHESS_BOARD} _object;

  const float INC_LIGHT1_ANGLE=1;
}


class _window;

class _gl_widget : public QOpenGLWidget
{
Q_OBJECT

public:
  _gl_widget(_window *Window1);

  void clear_window();
  void change_projection();
  void change_observer();

  void draw_axis();
  void draw_objects();

  void set_animation();

  void set_lights();
  void set_materials();

protected:
  void resizeGL(int Width1, int Height1) Q_DECL_OVERRIDE;
  void paintGL() Q_DECL_OVERRIDE;
  void initializeGL() Q_DECL_OVERRIDE;
  void keyPressEvent(QKeyEvent *Keyevent) Q_DECL_OVERRIDE;

protected slots:
  void tick();

private:
  _window *Window;

  _axis Axis;
  _tetrahedron Tetrahedron;
  _cone Cone;
  _cylinder Cylinder;
  _sphere Sphere;
  _object_ply Object_ply;
  _level3 Level3;
  _chess_board Chess_board;


  _gl_widget_ne::_object Object;

  bool Draw_point;
  bool Draw_line;
  bool Draw_fill;
  bool Draw_chess;

  _gl_widget_ne::_mode_rendering Mode_rendering;

  float Observer_angle_x;
  float Observer_angle_y;
  float Observer_distance;

  bool Animation;

  QTimer *Timer;

  GLuint Texture;
  bool Light0_active;
  bool Light1_active;

  float Light1_angle;

  unsigned int Material_active;

};

#endif
