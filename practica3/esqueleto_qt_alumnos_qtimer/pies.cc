/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "pies.h"

/**
*
*@param
*@returns
*/

void _pies::create()
{
    base.create();
}


/**
*
*@param
*@returns
*/

void _pies::draw_point()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,8,0);
    base.draw_point();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,0,0);
    pie.draw_point();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(9,0,0);
    pie.draw_point();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _pies::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,8,0);
    base.draw_line();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,0,0);
    pie.draw_line();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(9,0,0);
    pie.draw_line();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _pies::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,8,0);
    base.draw_fill();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,0,0);
    pie.draw_fill();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(9,0,0);
    pie.draw_fill();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/

void _pies::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,8,0);
    base.draw_chess();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-9,0,0);
    pie.draw_chess();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(9,0,0);
    pie.draw_chess();
    glPopMatrix();
}


