

/*
 * Un sistema que enciena leds de la siguiente forma: 
 * Despues de 20 segundos de encendido el sistema, prender led 1 por 10 segundos. En 25 segundos de encendido el sistema, prender led 2 por 15 segundos. En 30 segundos de encendido el sistema, prender led 3 por 5 segundos. 
 * Repite el ciclo. 
 * Se visualiza el contador en una lcd y que led o leds se encuentra encendido.
 */
#include <LiquidCrystal.h> 
#include <TimerOne.h>   //se incluye la libreria
LiquidCrystal lcd(13,12,11,10,9,8); //RS E d4 d5 d6 d7 se inicia los pines que vamos a usar
 int led1=7;
 int led2=6;
 int led3=5;
 int on=0;
 unsigned int cont = 0;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
 lcd.begin(16,2);
 attachInterrupt(0,encendido, LOW); //configuracion de int 0
 Timer1.initialize(1000000); //timer1 a 1s
 Timer1.attachInterrupt(contador); // metodo de timer
}

void loop() {
  if(cont ==20){
    digitalWrite(led1, HIGH);
    lcd.setCursor(0,1);
    lcd.print("led 1");
    delay(10000);
    digitalWrite(led1, LOW);
    lcd.clear();
    }
  if(cont == 25){
    digitalWrite(led2, HIGH);
    lcd.setCursor(0,1);
    lcd.print("led 2");
    delay(15000);
    digitalWrite(led2, LOW);
    lcd.clear();
    }
  if(cont == 30){
    digitalWrite(led3, HIGH);
    lcd.setCursor(0,1);
    lcd.print("led 3");
    delay(5000);
    digitalWrite(led3, LOW);
    lcd.clear();

  }
}

void encendido (){
  on = 1-on;
  if (on==1){
    Serial.println("SISTEMA ON");
    Timer1.start();}
    else{
    Serial.println("SISTEMA OFF");
    cont=0;
    delay(200);
    Timer1.stop();
    lcd.clear();
  }
}

void contador(){
  if(on==1){
  cont++;
  lcd.setCursor(0,0);
  lcd.print(cont);
  }
}
