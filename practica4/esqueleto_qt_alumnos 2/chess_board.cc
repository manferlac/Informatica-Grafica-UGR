/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#include "chess_board.h"

/**
*
*@param
*@returns
*/

void _chess_board::create(float Size,unsigned int Divisions1)
{
    this->Divisions = Divisions1;
    if(x_fin<x_ini){
        float temp=x_ini;
        x_ini=x_fin;
        x_fin=temp;
      }
      if(y_fin<y_ini){
        float temp=y_ini;
        y_ini=y_fin;
        y_fin=temp;
      }

        lado_x = x_fin - x_ini;
        tam_cuadrado_x = lado_x / Divisions1;
        lado_y = y_fin - y_ini;
        tam_cuadrado_y = lado_y / Divisions1;

    generarVertices();
    generarTriangulos();

  compute_triangles_normals();
  compute_vertices_normals();
}

void _chess_board::generarVertices(){
    //Vertices
    _vertex3f coord;
    coord.z = 0;

    float aumento_x=tam_cuadrado_x;
      float aumento_y=tam_cuadrado_y;

    for(int h=0; h<2; h++){
       if(h==1) coord.z = -coord.z;
       for(int i=0; i<=Divisions; i++){
           coord.y=y_ini+aumento_y*i;
           for(int j=0; j<=Divisions; j++){
               coord.x=x_ini+aumento_x*j;
               Vertices.push_back(coord);

               Vertices_texture_coordinates.push_back({1.0f/Divisions*j,1.0f/Divisions*i});
           }
       }
    }
}

void _chess_board::generarTriangulos(){
    //Caras

   _vertex3ui cara;

   //Parte superior
   for(int i=0; i<Divisions; i++){
       for(int j=0; j<Divisions; j++){
         // Triángulos inferiores
         cara._0=i+j*(Divisions+1);
         cara._1=i+(Divisions+1)+j*(Divisions+1);
         cara._2=i+(Divisions+2)+j*(Divisions+1);
         Triangles.push_back(cara);

         // Triángulos superiores
         cara._0=i+j*(Divisions+1);
         cara._1=i+(Divisions+2)+j*(Divisions+1);
         cara._2=i+1+j*(Divisions+1);
         Triangles.push_back(cara);
       }
     }

     // Parte inferior
     for(int i=0; i<Divisions; i++){
       for(int j=0; j<Divisions; j++){
         cara._0=(Divisions+1)*(Divisions+1)+i+j*(Divisions+1);
         cara._1=(Divisions+1)*(Divisions+1)+i+1+j*(Divisions+1);
         cara._2=(Divisions+1)*(Divisions+1)+i+(Divisions+1)+j*(Divisions+1);
         Triangles.push_back(cara);

         cara._0=(Divisions+1)*(Divisions+1)+1+i+j*(Divisions+1);
         cara._1=(Divisions+1)*(Divisions+1)+i+(Divisions+2)+j*(Divisions+1);
         cara._2=(Divisions+1)*(Divisions+1)+i+(Divisions+1)+j*(Divisions+1);
         Triangles.push_back(cara);
       }
     }

     // Lado izquierdo
     for(int i=0; i<Divisions; i++){
       cara._0=i*(Divisions+1);
       cara._1=(Divisions+1)*(Divisions+1)+i*(Divisions+1);
       cara._2=(Divisions+1)+i*(Divisions+1);
       Triangles.push_back(cara);

       cara._0=cara._2;
       cara._2=cara._1+Divisions+1;
       Triangles.push_back(cara);
     }

     // Lado derecho
     for(int i=0; i<Divisions; i++){
       cara._0=Divisions+i*(Divisions+1);
       cara._1=Divisions+Divisions+1+i*(Divisions+1);
       cara._2=(Divisions+1)*(Divisions+1)+Divisions+Divisions+1+i*(Divisions+1);
       Triangles.push_back(cara);

       cara._1=cara._2;
       cara._2=(Divisions+1)*(Divisions+1)+Divisions+i*(Divisions+1);
       Triangles.push_back(cara);
     }

     // Lado superior
     for(int i=0; i<Divisions; i++){
       cara._0=i;
       cara._1=i+1;
       cara._2=(Divisions+1)*(Divisions+1)+i+1;
       Triangles.push_back(cara);

       cara._1=cara._2;
       cara._2=(Divisions+1)*(Divisions+1)+i;
       Triangles.push_back(cara);
     }

     // Lado inferior
     for(int i=0; i<Divisions; i++){
       cara._0=i+Divisions*(Divisions+1);
       cara._1=cara._0+(Divisions+1)*(Divisions+1);
       cara._2=cara._1+1;
       Triangles.push_back(cara);

       cara._1=cara._2;
       cara._2=cara._0+1;
       Triangles.push_back(cara);
     }
}
