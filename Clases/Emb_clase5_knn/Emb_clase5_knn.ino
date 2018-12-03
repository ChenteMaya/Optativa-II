

/*
numero de filas matriz de entrenameinto =120
numero de columnas matriz de entrenamiento =5
k-vecinos= 1,3,5,7
#etiquetas matriz entrenamiento=3-> tipo float //etiquetas tipo de flor
vector de nuevos datos=4->ancho y largo del sepalo y ancho y largo del pétalo //dato que mi sistema queiro que agrupe

*/

#include"datos_entrenamiento.h"
float vector[4]={5.4,3.9,1.7,0.4};//1
int on =0;
float result;
void setup() {
  Serial.begin(9600);
}
void loop() {
 if(on==0){
result=knn(120,5,3,3,vector);
  Serial.println(result);
  on=1;
  }
}
float knn(int fila, int col, int k, int label, float datos[]){//parametros de entrada , datos=nueva infromación
  int c=0;// movernos en columnas
  int f=0;//movernos en fila
  
  float k_vecinos_dist[k];//vector de almacenamiento de k distancias menores
  float etiquetas[2][label];// matriz y conteo de etiquetas
  float dist=0; //variable que almacena cada distancia.
  float dist_total=0;// caribel para almacenamiento distancai
  //lenar vector k_vecinos_dist con valores altos
  float eti_menor[k];//vector de eqtiquetas de distancia menor
  int k_cont=0;//contador de k
  int i=0;//contador
  float clase; //return etiqueta
  float comparacion;// comparar k-vecino mayor
  for (;c<k;c++)
  {
    k_vecinos_dist[c]=2000.0+c; // valores altos y ordenados
  }
  c=0;//reiniciar variable
  //llenado de las k distancias menores
  for(;c<label; c++){
    etiquetas [0][c]=c+1;//lleno con valores d eetiqueta
    etiquetas [1][c]=0;//lleno con el conteo de etiquetas
    }
    c=0;// reinicio de variabel
    // distancia mas corta del nuevo punto hacia la amtriz
    for(;f<fila;f++)
    {
      for(;c<col-1;c++){
        dist=dist+pow(matriz[f][c]-datos[c],2);//distancia entre dos puntos 
        }
        dist_total=sqrt(dist);//raíz total de la formula
        //Serial.print(dist_total);
        for(;k_cont<k;k_cont++){// determinar las k distancias enores y ordenarlas
          if(dist_total<k_vecinos_dist[k_cont]){
            k_vecinos_dist[k_cont]=dist_total;// asignar nuevo valor a vetor de dsitancias
            eti_menor[k_cont]=matriz[f][col-1];//col=5,4 //ya se ordenos el vector
            }
          }
          k_cont=0;
          dist=0;
          dist_total=0;
          c=0;
      }//for fila
      
      // comparar cada una de las posiciones d ela matriz y comparar
      
      //seleccion del k vecino
      for(;c<label;c++){
        for(;k_cont<k;k_cont++){// recorro cad posicion de eti_menor y comparo con etiquetas y cuento si son iguales
          if(etiquetas[0][c]==eti_menor[k_cont]){
            i++;
            etiquetas[1][c]=i;
            }
          }
          k_cont=0;
          i=0;
        }
        //c=0;
        c=1;//para que en comparacion
        comparacion=etiquetas[1][0];
        clase=etiquetas[0][0];
        for(;c<label;c++){
          if(etiquetas[1][c]>comparacion){//omparacion entre valores de suma de etiqueta
         clase=etiquetas[0][c];//ponga neuva clase 
         comparacion=etiquetas[1][c];
         
         }
          }
          comparacion=0;
          c=1;
          return clase;
        
}
