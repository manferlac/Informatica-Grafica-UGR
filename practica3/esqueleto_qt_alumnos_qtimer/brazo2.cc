/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "brazo2.h"

/**
*
*@param
*@returns
*/

void _brazo2::create()
{
  brazo1.create();
}


/**
*
*@param
*@returns
*/

void _brazo2::draw_point()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(3,6,0);
    brazo1.draw_point();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,10,0);
    glScalef(2,20,2);
    cubo.draw_point();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _brazo2::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(3,6,0);
    brazo1.draw_line();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,10,0);
    glScalef(2,20,2);
    cubo.draw_line();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _brazo2::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(3,6,0);
    brazo1.draw_fill();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,10,0);
    glScalef(2,20,2);
    cubo.draw_fill();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _brazo2::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(3,6,0);
    brazo1.draw_chess();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,10,0);
    glScalef(2,20,2);
    cubo.draw_chess();
    glPopMatrix();
}


