HEADERS += \
  colors.h \
  basic_object3d.h \
  object3d.h \
  axis.h \
  tetrahedron.h \
  object3d_sweep_basic.h \
#  cone.h \
#  cylinder.h \
#  sphere.h \
  file_ply_stl.h \
#  object_ply.h \
  glwidget.h \
  window.h \
    object_ply.h \
    sphere.h \
    cone.h \
    cylinder.h

SOURCES += \
  basic_object3d.cc \
  object3d.cc \
  axis.cc \
  tetrahedron.cc \
  object3d_sweep_basic.cc \
#  cone.cc \
#  cylinder.cc \
#  sphere.cc \
  file_ply_stl.cc \
#  object_ply.cc \
  main.cc \
  glwidget.cc \
  window.cc \
    object_ply.cc \
    cone.cc \
    cylinder.cc \
    sphere.cc


LIBS += -L/usr/X11R6/lib64


CONFIG += c++11
QT += widgets
