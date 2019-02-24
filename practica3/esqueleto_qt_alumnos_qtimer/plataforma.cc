/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "plataforma.h"

/**
*
*@param
*@returns
*/

void _plataforma::create()
{
  brazo2.create();
}


/**
*
*@param
*@returns
*/

void _plataforma::draw_point()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(5,2,0);
    brazo2.draw_point();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,1,0);
    glScalef(12,2,6);
    cubo.draw_point();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-7,-2,0);
    contrapeso.draw_point();
    glPopMatrix();
    glTranslatef(6.5,0,2.5);
    cabina.draw_point();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _plataforma::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(5,2,0);
    brazo2.draw_line();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,1,0);
    glScalef(12,2,6);
    cubo.draw_line();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-7,-2,0);
    contrapeso.draw_line();
    glPopMatrix();
    glTranslatef(6.5,0,2.5);
    cabina.draw_line();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _plataforma::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(5,2,0);
    brazo2.draw_fill();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,1,0);
    glScalef(12,2,6);
    cubo.draw_fill();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-7,-2,0);
    contrapeso.draw_fill();
    glPopMatrix();
    glTranslatef(6.5,0,2.5);
    cabina.draw_fill();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _plataforma::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(5,2,0);
    brazo2.draw_chess();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,1,0);
    glScalef(12,2,6);
    cubo.draw_chess();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-7,-2,0);
    contrapeso.draw_chess();
    glPopMatrix();
    glTranslatef(6.5,0,2.5);
    cabina.draw_chess();
    glPopMatrix();
}


