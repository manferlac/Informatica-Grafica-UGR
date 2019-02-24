/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "sphere.h"

/**
*
*@param
*@returns
*/

void _sphere::create(unsigned int Num_horizontal_divisions1,unsigned int Num_vertical_divisions1,float Radius1)
{
    Num_vertical_divisions = Num_vertical_divisions1;
    Num_horizontal_divisions = Num_horizontal_divisions1;
    float angulo_ini = -0.5*M_PI;
    float angulo_fin =  0.5*M_PI;
    float angulo = M_PI/Num_vertical_divisions;
    float x,y;
    float radio = 0.5;
    vector<_vertex2f> vert;
    vert.resize(Num_vertical_divisions);
    //inserción primer punto
    vert[0] = _vertex2f(0,-radio);

    //insercion puntos intermedios
    for(int i = 1; i<=Num_vertical_divisions; i++){
        x = radio*cos(angulo_ini + angulo*i);
        y = radio*sin(angulo_ini + angulo*i);

        vert[i] = _vertex2f(x,y);
    }

    //insercion ultimo punto
    vert[vert.size()-1] = _vertex2f(0,radio);

    _object3d_sweep_basic::create(vert,Num_horizontal_divisions);

    Vertices_texture_coordinates.resize(3*Triangles.size());
    for (unsigned int i=0;i<Triangles.size();i++){
      Vertices_texture_coordinates[3*i]=_vertex2f(Vertices[Triangles[i]._0].x,Vertices[Triangles[i]._0].y);
      Vertices_texture_coordinates[3*i+1]=_vertex2f(Vertices[Triangles[i]._1].x,Vertices[Triangles[i]._1].y);
      Vertices_texture_coordinates[3*i+2]=_vertex2f(Vertices[Triangles[i]._2].x,Vertices[Triangles[i]._2].y);


      //Vertices_texture_coordinates.push_back({1.0f/Num_vertical_divisions1,1.0f/Num_vertical_divisions1});
    }


    compute_triangles_normals();
    compute_vertices_normals();

}


/**
*
*@param
*@returns
*/

void _sphere::compute_triangles_normals()
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

void _sphere::compute_vertices_normals()
{
    Vertices_normals.resize(Vertices.size());

    for(unsigned long i = 0; i < Triangles.size(); i++){
        Vertices_normals[Triangles[i].x] += Triangles_normals[i];
        Vertices_normals[Triangles[i].y] += Triangles_normals[i];
        Vertices_normals[Triangles[i].z] += Triangles_normals[i];
    }
}
