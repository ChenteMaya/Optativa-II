int matriz [10][4] = {{3,  5, -6,  7},
                      {3,  8,  6, 17},
                      {2, -4,  4, 27},
                      {2,  4,  8, 10},
                      {2,  4, -2,  5},
                      {4,  5,  6,  7},
                      {5, -8,  6, -7},
                      {1,  5, 16,  8},
                      {0,  5, 12,  7},
                      {4,  5, 16,  7}};
int item = 0;
int suma = 0;
int filas=0,columnas=0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0){ //se verifica si existen datos ingresados en Serial
    item=Serial.read(); //en la variable item se guarda la indicacion que deseamos que se ejecute 
    opciones(item); //aqui se llama el void de las opciones o tareas a realizar
    }

}

void opciones(int a){ //se crea el void y se inicializa "a" para que sea nuestra variante en el menu que se crea
  switch(item ){
    
    case '1':
      Serial.println("Promedio de fila: ");
      for(filas=0;filas<10;filas++){//se realiza dos for consecutivos, el primero con el que se manejaran las filas y el segundo con las columnas
        for(columnas=0;columnas<4;columnas++){//de esta manera se pasa por cada posicion de la matriz
          suma=suma+matriz[filas][columnas]; //aqui se realiza la suma de cada en cada fila 
          }
          Serial.println(suma/4);  //teniendo todos las sumas se divide para 4 para obtener el promedio
          //se vuelve a inicializar la suma y columna a 0 con el  fin de que pase a la siguiente columna y se pueda hacer la suma de cada fila
          suma=0;
          columnas=0;
        }
        suma=0;// se inicializa suma otra vez en 0 porque se va a volver a usar
    break;
    
    case '2':
      Serial.println("Promedio de columnas: ");
      for(columnas=0;columnas<4;columnas++){//ahora como en el anterior pero ahora se ponen primero las columnas ya que de esta manera empezara el conteo por las columnas
        for(filas=0;filas<10;filas++){//de esta manera se pasa por cada posicion de la matriz
          suma=suma+matriz[filas][columnas];//aqui se realiza la suma de cada en cada columna
          }
          Serial.println(suma/10);//teniendo todos las sumas se divide para 10 para obtener el promedio
          //se vuelve a inicializar la suma y fila a 0 con el  fin de que pase a la siguiente fila y se pueda hacer la suma de cada columna
          suma=0;
          filas=0;
        }
        suma=0;// se inicializa suma otra vez en 0 porque se va a volver a usar
    break;
    
    case '3':
      Serial.println("Numero mayor en cada fila: ");
      for(filas=0;filas<10;filas++) {
        suma==matriz[filas][0];
        for (columnas=0;columnas<3;columnas++) {
          if (suma<matriz[filas][columnas+1])
            suma=matriz[filas][columnas+1];
        }
        Serial.println(suma);
        //se vuelve a inicializar la suma y columna a 0 con el  fin de que pase a la siguiente columna y se pueda hacer la comparacion de cada fila
        suma=0;
        columnas=0;
      }
      suma = 0;// se inicializa suma otra vez en 0 porque se va a volver a usar
    break;
    
    case '4':
       Serial.println("Numero bajo en cada columna: ");
      for(columnas=0;columnas<4;columnas++){
        suma==matriz[0][columnas];
        for(filas=0;filas<9;filas++){
          if(suma>matriz[filas+1][columnas])
            suma=matriz[filas+1][columnas];
        }
        Serial.println(suma);
        suma=0;
        filas=0;
      }
      suma=0;
     
    break;
    
    case '5':
      Serial.println("Numero mayor en la matriz: ");
      suma == matriz[0][0];
      for(filas=0;filas<10;filas++){
        for(columnas=0;columnas<3;columnas++){
          if(suma<matriz[filas][columnas+1])
            suma=matriz[filas][columnas+1];
        }
        columnas=0;
      }
      Serial.println(suma);
      suma=0;
    break;
    
    case '6':
      Serial.println("Numero menor en la matriz: ");
      suma==matriz[0][0];
      for(filas=0;filas<10;filas++){
        for(columnas=0;columnas<3;columnas++){
          if(suma>matriz[filas][columnas+1])
            suma=matriz[filas][columnas+1];
        }
        columnas=0;
      }
      Serial.println(suma);
      suma=0;
      filas= 0;
      columnas=0;
    break;

    default:
      Serial.println("Opcion no valida");
    break;
    }
  
  }
