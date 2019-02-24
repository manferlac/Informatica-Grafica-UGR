/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "contrapeso.h"

/**
*
*@param
*@returns
*/

void _contrapeso::create()
{
}


/**
*
*@param
*@returns
*/

void _contrapeso::draw_point()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,2,0);
    glScalef(2,4,6);
    cubo.draw_point();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _contrapeso::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,2,0);
    glScalef(2,4,6);
    cubo.draw_line();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _contrapeso::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,2,0);
    glScalef(2,4,6);
    cubo.draw_fill();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _contrapeso::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,2,0);
    glScalef(2,4,6);
    cubo.draw_chess();
    glPopMatrix();
}


