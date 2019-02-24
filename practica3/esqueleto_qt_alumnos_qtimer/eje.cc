/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "eje.h"

/**
*
*@param
*@returns
*/

void _eje::create()
{
    plataforma.create();
  cilindro.create(cilindro.EjesRotacion,40);

}


/**
*
*@param
*@returns
*/

void _eje::draw_point()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    plataforma.draw_point();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,6,0);
    glScalef(6,4,6);
    cilindro.draw_point();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _eje::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    plataforma.draw_line();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,6,0);
    glScalef(6,4,6);
    cilindro.draw_line();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _eje::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    plataforma.draw_fill();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,6,0);
    glScalef(6,4,6);
    cilindro.draw_fill();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _eje::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    plataforma.draw_chess();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,6,0);
    glScalef(6,4,6);
    cilindro.draw_chess();
    glPopMatrix();
}


