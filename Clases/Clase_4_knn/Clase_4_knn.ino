#include"datos_entrenamiento.h"
#include"datos_test.h"
int col=0;
int row=0;
float distancia;
float distancia_menor=1000;

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
   
      distancia=sqrt( pow((matriz[row][0]-prueba[25][0]),2)+
                      pow((matriz[row][1]-prueba[25][1]),2)+
                      pow((matriz[row][2]-prueba[25][2]),2)+
                      pow((matriz[row][3]-prueba[25][3]),2));
      if(distancia<distancia_menor){
        distancia_menor=distancia;
       // Serial.println(distancia_menor);
        Serial.println(matriz[row][4]);
            }
        
//      Serial.println(" ");
//      Serial.println(distancia);
// 
   
      }
   
          } 
