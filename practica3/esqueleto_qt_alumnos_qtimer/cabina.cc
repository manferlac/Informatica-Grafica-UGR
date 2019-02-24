/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "cabina.h"

/**
*
*@param
*@returns
*/

void _cabina::create()
{
}


/**
*
*@param
*@returns
*/

void _cabina::draw_point()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,0.5,0);
    //glScalef(0.5,0.5,0.5);
    cubo.draw_point();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _cabina::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,0.5,0);
    //glScalef(0.5,0.5,0.5);
    cubo.draw_line();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _cabina::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,0.5,0);
    //glScalef(0.5,0.5,0.5);
    cubo.draw_fill();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _cabina::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,0.5,0);
    //glScalef(0.5,0.5,0.5);
    cubo.draw_chess();
    glPopMatrix();
}


