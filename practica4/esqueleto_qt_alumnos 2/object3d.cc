/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "object3d.h"

using namespace _colors_ne;

/**
*
*@param
*@returns
*/

void _object3D::draw_line()
{
  glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
  glPolygonOffset(-1,1);
  glBegin(GL_TRIANGLES);
  for (unsigned int i=0;i<Triangles.size();i++){
    glVertex3fv((GLfloat *) &Vertices[Triangles[i]._0]);
    glVertex3fv((GLfloat *) &Vertices[Triangles[i]._1]);
    glVertex3fv((GLfloat *) &Vertices[Triangles[i]._2]);
  }
  glEnd();
}


/**
*
*@param
*@returns
*/

void _object3D::draw_fill()
{

}


/**
*
*@param
*@returns
*/

void _object3D::draw_chess()
{

}


/**
*
*@param
*@returns
*/

//Iluminación plana
void _object3D::draw_illumination_flat_shading()
{
    glEnable(GL_CULL_FACE);
    glShadeModel(GL_FLAT);
    glEnable(GL_NORMALIZE);

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_TRIANGLES);
    for(int i = 0; i<Triangles.size(); i++){
        glNormal3f(Triangles_normals[i].x, Triangles_normals[i].y, Triangles_normals[i].z);
        glVertex3f(Vertices[Triangles[i].x].x, Vertices[Triangles[i].x].y, Vertices[Triangles[i].x].z);
        glVertex3f(Vertices[Triangles[i].y].x, Vertices[Triangles[i].y].y, Vertices[Triangles[i].y].z);
        glVertex3f(Vertices[Triangles[i].z].x, Vertices[Triangles[i].z].y, Vertices[Triangles[i].z].z);
    }

    glEnd();
    glDisable(GL_CULL_FACE);

}

/**
*
*@param
*@returns
*/

//Iluminación suave
void _object3D::draw_illumination_smooth_shading()
{
    glEnable(GL_CULL_FACE);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_NORMALIZE);

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_TRIANGLES);
    for(int i = 0; i<Triangles.size(); i++){

        glNormal3f(Vertices_normals[Triangles[i].x].x, Vertices_normals[Triangles[i].x].y, Vertices_normals[Triangles[i].x].z);
            glVertex3f(Vertices[Triangles[i].x].x, Vertices[Triangles[i].x].y, Vertices[Triangles[i].x].z);
        glNormal3f(Vertices_normals[Triangles[i].y].x, Vertices_normals[Triangles[i].y].y, Vertices_normals[Triangles[i].y].z);
            glVertex3f(Vertices[Triangles[i].y].x, Vertices[Triangles[i].y].y, Vertices[Triangles[i].y].z);
        glNormal3f(Vertices_normals[Triangles[i].z].x, Vertices_normals[Triangles[i].z].y, Vertices_normals[Triangles[i].z].z);
            glVertex3f(Vertices[Triangles[i].z].x, Vertices[Triangles[i].z].y, Vertices[Triangles[i].z].z);
    }
    glEnd();
    glDisable(GL_CULL_FACE);
}





/**
*
*@param
*@returns
*/

void _object3D::draw_texture()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glEnable(GL_TEXTURE_2D);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glBegin(GL_TRIANGLES);

    for(unsigned int i = 0; i<Triangles.size(); i++){
        glNormal3f(Triangles_normals[i].x, Triangles_normals[i].y, Triangles_normals[i].z);
        glTexCoord2f(Vertices_texture_coordinates[Triangles[i]._0].x,Vertices_texture_coordinates[Triangles[i]._0].y);
        glVertex3f(Vertices[Triangles[i].x].x, Vertices[Triangles[i].x].y, Vertices[Triangles[i].x].z);
        glTexCoord2f(Vertices_texture_coordinates[Triangles[i]._1].x,Vertices_texture_coordinates[Triangles[i]._1].y);
        glVertex3f(Vertices[Triangles[i].y].x, Vertices[Triangles[i].y].y, Vertices[Triangles[i].y].z);
        glTexCoord2f(Vertices_texture_coordinates[Triangles[i]._2].x,Vertices_texture_coordinates[Triangles[i]._2].y);
        glVertex3f(Vertices[Triangles[i].z].x, Vertices[Triangles[i].z].y, Vertices[Triangles[i].z].z);
    }

    glEnd();
    glPopMatrix();
}

/**
*
*@param
*@returns
*/
//Textura con iluminación plana
void _object3D::draw_texture_illumination_flat_shading()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_CULL_FACE);
    glEnable(GL_NORMALIZE);
    glShadeModel(GL_FLAT);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glBegin(GL_TRIANGLES);

    for(unsigned int i = 0; i<Triangles.size(); i++){
       glNormal3f(Triangles_normals[i].x, Triangles_normals[i].y, Triangles_normals[i].z);
        glTexCoord2f(Vertices_texture_coordinates[Triangles[i]._0].x,Vertices_texture_coordinates[Triangles[i]._0].y);
        glVertex3f(Vertices[Triangles[i].x].x, Vertices[Triangles[i].x].y, Vertices[Triangles[i].x].z);
        glTexCoord2f(Vertices_texture_coordinates[Triangles[i]._1].x,Vertices_texture_coordinates[Triangles[i]._1].y);
        glVertex3f(Vertices[Triangles[i].y].x, Vertices[Triangles[i].y].y, Vertices[Triangles[i].y].z);
        glTexCoord2f(Vertices_texture_coordinates[Triangles[i]._2].x,Vertices_texture_coordinates[Triangles[i]._2].y);
        glVertex3f(Vertices[Triangles[i].z].x, Vertices[Triangles[i].z].y, Vertices[Triangles[i].z].z);
    }

    glEnd();
    glDisable(GL_CULL_FACE);
    glPopMatrix();
}

/**
*
*@param
*@returns
*/
//Texturas con iluminacion suave
void _object3D::draw_texture_illumination_smooth_shading()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_CULL_FACE);
    glEnable(GL_NORMALIZE);
    glShadeModel(GL_SMOOTH);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glBegin(GL_TRIANGLES);

    for(unsigned int i = 0; i<Triangles.size(); i++){
    glNormal3f(Vertices_normals[Triangles[i].x].x, Vertices_normals[Triangles[i].x].y, Vertices_normals[Triangles[i].x].z);
    glTexCoord2f(Vertices_texture_coordinates[Triangles[i]._0].x,Vertices_texture_coordinates[Triangles[i]._0].y);
        glVertex3f(Vertices[Triangles[i].x].x, Vertices[Triangles[i].x].y, Vertices[Triangles[i].x].z);
    glNormal3f(Vertices_normals[Triangles[i].y].x, Vertices_normals[Triangles[i].y].y, Vertices_normals[Triangles[i].y].z);
    glTexCoord2f(Vertices_texture_coordinates[Triangles[i]._1].x,Vertices_texture_coordinates[Triangles[i]._1].y);
        glVertex3f(Vertices[Triangles[i].y].x, Vertices[Triangles[i].y].y, Vertices[Triangles[i].y].z);
    glNormal3f(Vertices_normals[Triangles[i].z].x, Vertices_normals[Triangles[i].z].y, Vertices_normals[Triangles[i].z].z);
    glTexCoord2f(Vertices_texture_coordinates[Triangles[i]._2].x,Vertices_texture_coordinates[Triangles[i]._2].y);
        glVertex3f(Vertices[Triangles[i].z].x, Vertices[Triangles[i].z].y, Vertices[Triangles[i].z].z);
    }

    glEnd();
    glDisable(GL_CULL_FACE);
    glPopMatrix();
}


/**
*
*@param
*@returns
*/

//EN ESTA FUNCIÓN CALCULAMOS LAS NORMALES DE LOS TRIANGULOS
void _object3D::compute_triangles_normals()
{
   Triangles_normals.resize(Triangles.size());

   for(unsigned long i = 0; i < Triangles.size(); i++){
        _vertex3f vectorA = Vertices[Triangles[i].y] - Vertices[Triangles[i].x];
        _vertex3f vectorB = Vertices[Triangles[i].z] - Vertices[Triangles[i].x];

        _vertex3f normal = vectorA.cross_product(vectorB);
        normal.normalize();
        Triangles_normals[i] = normal;
   }
}

/**
*
*@param
*@returns
*/

//CALCULAMOS LAS NORMALES DE LOS VERTICES
void _object3D::compute_vertices_normals()
{
    Vertices_normals.resize(Vertices.size());

    for(unsigned long i = 0; i < Triangles.size(); i++){
        Vertices_normals[Triangles[i].x] += Triangles_normals[i];
        Vertices_normals[Triangles[i].y] += Triangles_normals[i];
        Vertices_normals[Triangles[i].z] += Triangles_normals[i];
    }
}

