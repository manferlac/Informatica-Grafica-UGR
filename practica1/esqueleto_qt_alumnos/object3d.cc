/*
* Practicas de IG
* Domingo Martin Perandres© 2014-2018
* dmartin@ugr.es
*
* GPL 3
*/

#include "object3d.h"

using namespace _colors_ne;

/**
*
*@param
*@returns
*/

void _object3D::draw_line()
{
  glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
  glBegin(GL_TRIANGLES);
  for (unsigned int i=0;i<Triangles.size();i++){
    glVertex3fv((GLfloat *) &Vertices[Triangles[i]._0]);
    glVertex3fv((GLfloat *) &Vertices[Triangles[i]._1]);
    glVertex3fv((GLfloat *) &Vertices[Triangles[i]._2]);
  }
  glEnd();
}


/**
*
*@param
*@returns
*/

void _object3D::draw_fill()
{
    glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
        glBegin(GL_TRIANGLES);
        for (unsigned int i=0;i<Triangles.size();i++){
          glVertex3fv((GLfloat *) &Vertices[Triangles[i]._0]);
          glVertex3fv((GLfloat *) &Vertices[Triangles[i]._1]);
          glVertex3fv((GLfloat *) &Vertices[Triangles[i]._2]);
        }
        glEnd();
}


/**
*
*@param
*@returns
*/

void _object3D::draw_chess(GLfloat * color1, GLfloat * color2)
{
    glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
        glBegin(GL_TRIANGLES);

        for (unsigned int i=0;i<Triangles.size();i++){
            if(i%2 == 0){
                glColor3fv(color1);
            }else{
                glColor3fv(color2);
            }
                glVertex3fv((GLfloat *) &Vertices[Triangles[i]._0]);
                glVertex3fv((GLfloat *) &Vertices[Triangles[i]._1]);
                glVertex3fv((GLfloat *) &Vertices[Triangles[i]._2]);


        }
        glEnd();
}
