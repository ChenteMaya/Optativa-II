 //libreria

/*
 * Interrupciones: arduino UNO tiene 2 interrupciones
 *    INT0 -> pin 2
 *    INT1-> pin 3
 *    
 *    CONFIGURACION
 *      attaachInterrupt(interrupcion, metodo, tipo)
 *                      (opcional-> digitalPinToInterrupt(interrupcion), (cualquier nombre), (LOW, RISING, FALLING)
 *     
 * 
 * TimerOne
 * contadores
 * configuracion
 * -> añadir libreria
 * ->Timer1.initializa(periodo)   -> 1s = 1000000
 * ->Timer.attachInterrupt(metodo)
 * ->Timer1.start();
 * ->Timer1.stop();
 * ->Timer1.restart();
 * ->Timer1.resume();
 * 
 * MODO SLEEP
 * ahorra de bateria 
 * configurar
 * -> librerias -> avr/sleep.h
 *                 avr/power.h
 * set_sleep_mode()=indicar el modo de funcionamiento
 *          modos -> SLEEP_MODE_IDLE, SLEEP_MODE_ADC, SLEEP_MODE_PWR_SAVE, SLEEP_MODE_PWR_DOWN
 * 
 * sleep_mode(); -> entrar al modo configurado
 * sleep_disable(); -> salir del modo configurado, el programa inicia desde esa funcion
 * sleep_enable();  _< //variable para configurar
 *                 
 *               
 */
#include <TimerOne.h> 
#include <avr/sleep.h>
#include <avr/power.h>

int on = 0;  //variable encendido del sistema
unsigned int cont = 0; //variable del contador timer1, el unsigned es paraque solo trabaja con positivos
int config_t1 = 0;


void setup() {
  attachInterrupt(0,encendido, LOW); //configuracion de int 0
  attachInterrupt(1,conf_timer,LOW);
  Timer1.initialize(1000000); //timer1 a 1s
  Timer1.attachInterrupt(contador); // metodo de timer
      set_sleep_mode(SLEEP_MODE_PWR_DOWN);   //metodo de timer
      sleep_enable();// habilita la configuracion del sleep
  Serial.begin(9600); //habilitar configuracion serial
  
}

void loop() {
  // put your main code here, to run repeatedly:

}

//metodo de interrupcion

void encendido (){
  on = 1-on;
  if (on==1){
    Serial.println("SISTEMA ON");
    Timer1.start();}
    else{
    Serial.println("SISTEMA OFF");
    cont=0;
    dalay(200);
   // cont=0;  si deseo reiniciar el sistema 
   //Timer1.stop();
  }
}

void contador(){
  if(on==1){
  cont++;
  Serial.println(cont);
  }
}

//void conf_timer(){
//  switch(config_t1){
//    case 0:
//      Serial.println("T1: Stop");
//      Timer1.stop();
//      config_t1++;
//    break;
//    case 1:
//      Serial.println("T1: Start");
//      Timer1.start();
//      config_t1++;
//    break;
//    case 2:
//      Serial.println("T1: Restart");
//      Timer1.restart();
//      config_t1;
//    break;
//    case 3:
//      Serial.println("T1: Resume");
//      Timer1.resume();
//      config_t1=0;
//    break;
//    }
//  }
