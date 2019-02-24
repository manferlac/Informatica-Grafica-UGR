/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "pie.h"

/**
*
*@param
*@returns
*/

void _pie::create()
{
}


/**
*
*@param
*@returns
*/

void _pie::draw_point()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    glScalef(6,8,12);
    cubo.draw_point();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _pie::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    glScalef(6,8,12);
    cubo.draw_line();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _pie::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    glScalef(6,8,12);
    cubo.draw_fill();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _pie::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,4,0);
    glScalef(6,8,12);
    cubo.draw_chess();
    glPopMatrix();
}


