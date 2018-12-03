
#include <knn.h>

//borrar para evitar redundancia las otars librerias


int on=0;
float result;
float vect[4] = {6.1, 3, 4.9, 1.8};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  if (on == 0) {
    // result=knn(17,5,3,3,vect);
    Serial.println(result);
    on = 1;
  }
  // put your main code here, to run repeatedly:

}
