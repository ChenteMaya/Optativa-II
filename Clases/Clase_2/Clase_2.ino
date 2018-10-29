
/*
 * programa para menejo de lcd de 16x2
 */
 
#include <LiquidCrystal.h>
 //inicializar lcd
 
 LiquidCrystal lcd(13,12,11,10,9,8); //RS E d4 d5 d6 d7
 char vector[7] { 'C','I','E','R','C','O','M'}; //vector de juego
 int i=0;
 int encender=0; //encendido del sistema 

void setup() {
  lcd.begin(16,2); //forma de trabajo de la matriz
  attachInterrupt(0,on,LOW);//definir el pin de trabajo, nombramos al metodo, elegimos el tipo de interrupcion,
}

void loop() {

  if(encender ==1){
//  lcd.setCursor(0,0); //elijo posicion de lcd
//  lcd.println("HOLA"); //imprimo dato
//  delay(500); //espero a visualizar
//  lcd.clear(); //borro lcd
//  delay(500);   // espero a borra
lcd.setCursor(0,1);
lcd.print(analogRead(0));
for(;i<7;i++){
lcd.setCursor(i,0);
lcd.print(vector[i]);
delay(100);

}

for(i=0;i<7;i++){
lcd.setCursor(i,0);
lcd.print(' ');
delay(100);

}

for(;i>=0;i--){
lcd.setCursor(i,0);
lcd.print(vector[i]);
delay(100);

}

for(i=7;i>=0;i--){
lcd.setCursor(i,0);
lcd.print(' ');
delay(100);

}

//lcd.clear(); // si queremos que se imprima letra por letra entra el clar aqui y el de abajo se borra

//lcd.clear();
//i=0;


}else{
  lcd.clear();
  }
}
void on(){
  encender =1-encender;
  }
