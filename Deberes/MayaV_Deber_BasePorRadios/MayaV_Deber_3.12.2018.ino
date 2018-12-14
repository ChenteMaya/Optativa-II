
#include"datos_entrenamiento.h"


int on=0;
int i=0, j=0, z=0;
float s1, s2, s3, s4;
int a=0;
float t1,t2,t3,t4;
float d1,d2,d3,d4;
float norm1, norm2, norm3;
int n,o,r,t;
float mayor1=0,mayor2=0,mayor3=0,mayor4=0;
float v1[40];
float v2[40];
float ran1 = 0.17, ran2 =0.22;

void setup() {
  Serial.begin(9600);

}

void loop() {
  if(on==0){
      for(;i<40;i++){
      s1+=matriz[i][0];
      a++;
     }
    t1=s1/a;
    a=0;i=0;
   for(;i<40;i++){
      s2+=matriz[i][1];
      a++;
     }
    t2=s2/a;
    a=0;i=0;
  for(;i<40;i++){
      s3+=matriz[i][2];
      a++;
     }
    t3=s3/a;
    a=0; i=0;
    //columna4
    for(;i<40;i++){
      s4+=matriz[i][3];
      a++;
     }
    t4=s4/a;
    i=0;

    for(;n<=a-1;n++){
      d1=sqrt(pow((matriz[n][0]-t1),2)+
              pow((matriz[n][1]-t2),2)+
              pow((matriz[n][2]-t3),2)+
              pow((matriz[n][3]-t4),2));

       v1[n]=d1;

      if(mayor1<=v1[n]){
        mayor1=v1[n];
   
        }
      }


      for(;j<a;j++){
        norm1=v1[j]/mayor1;
        //Serial.println(norm1);
        }
        j=0;

      for(;j<40;j++){
        if(v1[j]>ran1&&v1[j]<ran2){
          Serial.println("1");
          v1[j]=1;
          
          o++;
          }else{
          Serial.println("0");
          v1[j]=1;
          }
        if(v1[j]==1){

      Serial.print(matriz[j][0]);
      Serial.print(",");
      Serial.print(matriz[j][1]);
      Serial.print(",");
      Serial.print(matriz[j][2]);
      Serial.print(",");
      Serial.print(matriz[j][3]);
         
          
          }
          
      }
      Serial.println(o);
    
 
     
     on=1;
 

}

}
