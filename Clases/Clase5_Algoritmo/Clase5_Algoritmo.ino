#include <knn.h>





//numero de filas matriz de entrenamiento =120
// numero de columnas de matriz de entrenamiento = 5
// k-vecinos =1,3,5,7 si hay mas pero es dificiciiciclommoom
//etiquetass matriz de entrenamiento = 3  -> tipo float pero entero
// vector de nuevos datos = 4 datos = ancho y largo del sepalo; y ancho y largo del petalo 

float vector [4]={5.4,3.9,1.7,0.4};
int on=0;
float result;
void setup() {
  Serial.begin(9600);

}

void loop() {
 
      result = knn(120,5,3,3,vector);
      Serial.println(result);
      
    
}


#include"datos_entrenamiento.h"
#include<math.h>


float knn(int fila, int col, int k, int label, float datos[]){
  int c=0; //movernos en columnas
  int f=0; //movernos en filas
  float k_vecinos_disk[k]; //vector de almacenamiento de k distancias menores
  float etiquetas [2][label]; //matriz de etiquetas y de conteo 
  int dist =0;
  float dist_total=0;
  //llenado de las k distancias menores
  //lenar vector k_vecinos_dist con valores altos
  float eti_menor[k]; //vector de etiquetas de distancia menor
  int k_cont =0;
  int i=0;
  int clase;  //retornar etiqueta
  int comparacion; //comparar k vecino mayor
  
  for(;c<k;c++){
    k_vecinos_disk[c]=2000+c;
  }
  c=0; //reiniciamos variable
  //lenar matriz con etiquetas

  for(;c<label;c++){
    etiquetas[0][c] = c+1;  //lleno con valores de etiqueta
    etiquetas[1][c] = 0;    //leno con el conteo de etiquetas
    }
    c=0;  //reinicio variable
    //la distancia mas corta del nuevo punto hacia la matriz 

    for (;f<fila;f+9){
      for (;c<col-1;c++){
        dist=dist+pow((matriz[f][c]-datos[c]),2);  //distancia entre dos puntos
        }
        dist_total= sqrt (dist); //la raiz de la fomula
        //Serial.println(dist_total);
        for(;k_cont<k;k_cont++){
          if(dist_total<k_vecinos_disk[k_cont]){
            eti_menor[k_cont]=matriz[f][col-1]; //col = 5, 4
            }
        }
      k_cont=0;
      dist=0;
      dist_total=0;
      c=0;
     
    }//por fila

    //seleccion de los k vecinos

    for(;c<label;c++){
      for (;k_cont<k;k_cont++){
        if(etiquetas[0][c]==eti_menor[k_cont]){
          i++;
          etiquetas[1][c]=i;
          }
        }

        k_cont=0;
        i=0;
      }
      c=1;
      comparacion = etiquetas[1][0];
      clase= etiquetas [0][0];
      for(;c<label;c++){
        if (etiquetas[1][c]>comparacion){
          clase=etiquetas[0][c];
          }
        }
      comparacion =0;
      c=0;
      return clase;
}
