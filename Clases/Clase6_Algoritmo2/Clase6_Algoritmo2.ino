
#include <knn.h>



float vector[4]= {7.2,3.6,6.1,2.5};
int on =0;
float result;

void setup() {
 Serial.begin(9600);
}

void loop() {
  if(on==0){
  result=knn(19,5,3,3,vector);
     Serial.println(result);
    on=1;
   
    }
}
