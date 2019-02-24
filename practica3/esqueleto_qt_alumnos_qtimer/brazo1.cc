/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "brazo1.h"

/**
*
*@param
*@returns
*/

void _brazo1::create()
{
  cable.create();
}


/**
*
*@param
*@returns
*/

void _brazo1::draw_point()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(1,0,0);
    cable.draw_point();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,15,0);
    glScalef(4,2,2);
    cubo.draw_point();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _brazo1::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(1,0,0);
    cable.draw_line();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,15,0);
    glScalef(4,2,2);
    cubo.draw_line();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _brazo1::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(1,0,0);
    cable.draw_fill();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,15,0);
    glScalef(4,2,2);
    cubo.draw_fill();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _brazo1::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(1,0,0);
    cable.draw_chess();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,15,0);
    glScalef(4,2,2);
    cubo.draw_chess();
    glPopMatrix();
}


