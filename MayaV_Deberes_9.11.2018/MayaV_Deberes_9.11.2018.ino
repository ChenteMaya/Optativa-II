#include"datos_entrenamiento.h"
#include"datos_test.h"


int col=0;
int row=0;
float distancia;
float dist_menor=1000;
int tcont=0;

int d1=0;
int d2=0;
int d3=0;
int valor_p=20;// se puede poner cualquier valor de datos_test para hacer pruebas

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {

  for(;row<120;row++){ // contador de filas (for lento)
       distancia= sqrt( pow((matriz[row][0]-prueba[valor_p][0]),2)+
                        pow((matriz[row][1]-prueba[valor_p][1]),2)+
                        pow((matriz[row][2]-prueba[valor_p][2]),2)+
                        pow((matriz[row][3]-prueba[valor_p][3]),2));
      if(distancia<dist_menor){ 
       dist_menor=distancia;   
       Serial.println(dist_menor);
       tcont=matriz[row][4];
       Serial.println(tcont);
       
         switch(tcont){
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
      
  }

/*
 * Lectura de datos
  for(;row<120;row++){ // contador de filas (for lento)
    for(;col<5;col++){ // contador de col (for rapido)
      Serial.print(matriz[row][col]);  // imprime dato de matriz
      Serial.print(',');            // separador de dato
      delay(25);
      }
      col=0;        // reinicio de columna
      Serial.println(' ');   // caracter en blanco de avance de linea
  }
  */    
}
