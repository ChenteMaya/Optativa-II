#include"datos_entrenamiento.h"
#include"datos_test.h"
int col=0;
int row=0;
float distancia1;
float distancia2;
float distancia3;
float distancia_menor=1000;
int analisis=25;

void setup() {
  Serial.begin(115200);
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

for(;row<120;row++){
   
      distancia1=sqrt( pow((matriz[row][0]-prueba[analisis][0]),2)+
                      pow((matriz[row][1]-prueba[analisis][1]),2)+
                      pow((matriz[row][2]-prueba[analisis][2]),2)+
                      pow((matriz[row][3]-prueba[analisis][3]),2));
                      
      distancia2=sqrt( pow((matriz[row][0]-prueba[analisis][0]),2)+
                      pow((matriz[row][1]-prueba[analisis][1]),2)+
                      pow((matriz[row][2]-prueba[analisis][2]),2)+
                      pow((matriz[row][3]-prueba[analisis][3]),2));
                      
      distancia3=sqrt( pow((matriz[row][0]-prueba[analisis][0]),2)+
                      pow((matriz[row][1]-prueba[analisis][1]),2)+
                      pow((matriz[row][2]-prueba[analisis][2]),2)+
                      pow((matriz[row][3]-prueba[analisis][3]),2));
                      
      if(distancia1<distancia_menor){
        distancia_menor=distancia1;
       // Serial.println(distancia_menor);
        Serial.println(matriz[row][4]);
            }
        
//      Serial.println(" ");
//      Serial.println(distancia);
// 
   
      }
      Serial.println("distancia2");
      Serial.println(distancia2);
      Serial.println("distancia3");
      Serial.println(distancia3);
   
          } 
