
#include<knn.h>

/*
numero de filas matriz de entrenameinto =120
numero de columnas matriz de entrenamiento =5
k-vecinos= 1,3,5,7
#etiquetas matriz entrenamiento=3-> tipo float //etiquetas tipo de flor
vector de nuevos datos=4->ancho y largo del sepalo y ancho y largo del pétalo //dato que mi sistema queiro que agrupe

*/

//#include"datos_entrenamiento.h"

float vector [4] = {5.4,3.9,1.7,0.4};//1
int on =0;
float result;
void setup() {
  Serial.begin(9600);
}
void loop() {
 if(on==0){
result=knn(120,5,3,3,vector);//numero de filas, numero de columnas, numero de vecinos, etiquetas, vector de comparacion
  Serial.println(result); 
  on=1;
  }
}
