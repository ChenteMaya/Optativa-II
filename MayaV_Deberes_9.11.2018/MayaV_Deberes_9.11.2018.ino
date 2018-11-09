#include <ArduinoSort.h>

#include"datos_entrenamiento.h"
#include"datos_test.h"
int col=0;
int row=0;
float distancia;
float distancia_menor=1000;

//variables posobles
int test=80;
byte valores[120];
int tipos[3];
int tipo_flor=0;
int d1=0;
int d2=0;
int d3=0;
int tiempo=0;

void setup() {
  
  Serial.begin(9600);

//  for(;row<120;row++){
//    for(;col<5;col++){
//      Serial.print(matriz[row][col]);
//      Serial.print(',');
//      
//      }
//      col=0;
//      Serial.println(' ');
//    }

 }


void loop() {

//el while para que se ejecute una sola vez, sin necesidad de interrupcion
while(tiempo==0){
for(;row<120;row++){
   
      distancia=sqrt( pow((matriz[row][0]-prueba[test][0]),2)+pow((matriz[row][1]-prueba[test][1]),2)+ pow((matriz[row][2]-prueba[test][2]),2)+pow((matriz[row][3]-prueba[test][3]),2)+pow((matriz[row][4]-prueba[test][4]),2));
        

valores[row]=distancia;
      
        Serial.println("");
        Serial.print("int: ");
        Serial.print(distancia);
         Serial.print("byte: ");
        Serial.print( valores[row]);

    }

   for(;col<120;col++){
 
  Serial.println(valores[col]);
}
     

tiempo=1;
  }
}

//selecciona el tipo de flor q es para mostrar en serial

void tipo(){
   switch(tipo_flor){
          case 1:
                 Serial.println("Setosa");
                 d1++;
                 break;
          case 2:
                  Serial.println("Versicolor");
                  d2++;
                 break;
          case 3:
                Serial.println("Virginica");
                d3++;
                 break;
        }
}
