/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "base.h"

/**
*
*@param
*@returns
*/

void _base::create()
{
    eje.create();
}


/**
*
*@param
*@returns
*/

void _base::draw_point()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    eje.draw_point();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,10,0);
    glScalef(24,4,12);
    cubo.draw_point();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _base::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    eje.draw_line();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,10,0);
    glScalef(24,4,12);
    cubo.draw_line();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _base::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    eje.draw_fill();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,10,0);
    glScalef(24,4,12);
    cubo.draw_fill();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _base::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    eje.draw_chess();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,10,0);
    glScalef(24,4,12);
    cubo.draw_chess();
    glPopMatrix();
}


