/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "cable.h"

/**
*
*@param
*@returns
*/

void _cable::create()
{
    cilindro.create(cilindro.EjesRotacion,40);
}


/**
*
*@param
*@returns
*/

void _cable::draw_point()
{
  glMatrixMode(GL_MODELVIEW);
  glPushMatrix();
  glTranslatef(0,7,0);
  glScalef(0.2,14,0.2);
  cilindro.draw_point();
  glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _cable::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,7,0);
    glScalef(0.2,14,0.2);
    cilindro.draw_line();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _cable::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,7,0);
    glScalef(0.2,14,0.2);
    cilindro.draw_fill();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _cable::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,7,0);
    glScalef(0.2,14,0.2);
    cilindro.draw_chess();
    glPopMatrix();
}
