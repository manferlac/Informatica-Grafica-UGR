HEADERS += \
  colors.h \
  basic_object3d.h \
  object3d.h \
  axis.h \
  cube.h \
  cylinder.h \
  tetrahedron.h \
  object3d_sweep_basic.h \
  glwidget.h \
  window.h \
    cable.h \
    brazo1.h \
    brazo2.h \
    plataforma.h \
    contrapeso.h \
    cabina.h \
    eje.h \
    base.h \
    pie.h \
    pies.h

SOURCES += \
  basic_object3d.cc \
  object3d.cc \
  axis.cc \
  cube.cc \
  cylinder.cc \
  tetrahedron.cc \
  object3d_sweep_basic.cc \
  main.cc \
  glwidget.cc \
  window.cc \
    cable.cc \
    brazo1.cc \
    brazo2.cc \
    plataforma.cc \
    contrapeso.cc \
    cabina.cc \
    eje.cc \
    base.cc \
    pie.cc \
    pies.cc


LIBS += -L/usr/X11R6/lib64 -lGL


CONFIG += c++11
QT += widgets
