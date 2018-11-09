 int matriz [10][4]={ {3,5,-6,7}, 
                      {3,8,6,17}, 
                      {2,-4,4,27}, 
                      {2,4,8,10}, 
                      {2,4,-2,5}, 
                      {4,5,6,7}, 
                      {5,-8,6,-7}, 
                      {1,5,16,8}, 
                      {0,5,12,7}, 
                      {4,5,16,7}};

int filas,columnas;
int s;

void setup() {
  Serial.begin(9600);
  
   for(filas=0;filas<10;filas++){
      for(columnas=0;columnas<4;columnas++){
        Serial.print(matriz[filas][columnas]);
        Serial.print(" ");
        }
        Serial.println(" ");
    }

}

void loop() {

promfila();


}

void promfila(){
  
   for(int s1=0; s1<4 ;s1++){
    s= matriz[s1];
    Serial.println(s);
    }
  
  }
