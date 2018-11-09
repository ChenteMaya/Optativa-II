#include"datos_entrenamiento.h"
#include"datos_test.h"
int resp[100]; //aqui ponemos dos vectores los cuales nos va a guardar la informacion de las comparaciones que necesitemos
int pos[100]; //de esta forma podremos tener las comparaciones y las posiciones que deseamos
int col=0;
int row=0;
float distancia;
float dist_menor=1000;
int contador=0;

int contres=0;

int kn=3; //aqui ponemos el numero de variables que deseamos, siempre debe ser impar 
//estas variables sirven para ver a que tipo de flor se acerca mas
int t1=0;
int t2=0;
int t3=0;
// este valor dato prueba sera nuestra variable para llamar el arreglo de datos_test
int datoprueba=15;
int programa=0;  //para que el programa se corra una sola vez cada vez que se le inicie

void setup() {

 Serial.begin(9600);
}

void loop() {
  while(programa==0){//el programa se ejecutara mientra programa sea 0 y no se vuelva a repetir

 knm(5); //aqui se llama la variable que creamos 

programa=1; // terminado el programa 
  }
}


void knm(int k){  //esta es la void que creamos

   for(;row<120;row++){ // contador que paasa toda la matriz
    //formula de la distancia
       distancia= sqrt( pow((matriz[row][0]-prueba[datoprueba][0]),2)+
                        pow((matriz[row][1]-prueba[datoprueba][1]),2)+
                        pow((matriz[row][2]-prueba[datoprueba][2]),2)+
                        pow((matriz[row][3]-prueba[datoprueba][3]),2));
                        //se selecciona si la distacia menor
      if(distancia<dist_menor){ 
        //y se iguala para tener un valor para igualarlo a la distancia menor e imprimir
       dist_menor=distancia;   
       Serial.println(dist_menor);
       //ahora nos muestra el contador que sirve para que no perdamos 
       contador=matriz[row][4];
       Serial.println(contador);

       
       resp[contres]=distancia;
       pos[contres]=matriz[row][4];
        contres++;

        
Serial.println("Valoes guardado");
Serial.println(contres);

  
       
     }  

         
      
  }

    for(int h=(contres-1);h>=(contres-k);h--){ //aqui se crea un vector que va a coger los ultimos valores dependiendo de la variable de k que hayamos puesto
  Serial.println("Valoes de h");
      Serial.println(h);
       Serial.println(resp[h]);
        Serial.println(pos[h]);
        
         switch(pos[h]){
          
          case 1:
                 Serial.println("Setosa");
                 t1++;
          break;
          case 2:
                 Serial.println("Versicolor");
                 t2++;
          break;
          case 3:
                Serial.println("Virginica");
                t3++;
          break;
        
        }
     
    }









  

 
}
