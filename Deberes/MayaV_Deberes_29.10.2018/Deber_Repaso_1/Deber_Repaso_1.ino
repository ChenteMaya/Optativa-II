
/*
 * Deber de Repaso Maya Vicente
 * Realizar un sistema que ingrese por comunicación serial una palabra y se visualice en una LCD. Además, realice un rotación de letras dentro la LCD.
 */
 
#include <LiquidCrystal.h> //se incluye la libreria
LiquidCrystal lcd(13,12,11,10,9,8); //RS E d4 d5 d6 d7 se inicia los pines que vamos a usar

// en estas tres lineas se inicializan las variables que vamos a utilizar a lo largo del programa
String palabra;
int tam;
int i=0;
 
void setup() {
  Serial.begin(9600); // se inicializa el serial
  lcd.begin(16,2);    //se inicializa el lcd
  Serial.println("INGRESE PALABRA"); //un comando que se imprimira en Serial como orden de ingreso de palabra

}

void loop() {
  if(Serial.available()>0){  //esta condicion nos dira si existen datos en el serial
    palabra = Serial.readString(); //aqui vemos como la palabra sera guradada leida a partir del comando .readString para cadena de caracteres
    tam=palabra.length();       //despues pasamos a la variable tam la cual va a ser nuestro vector y le damos a .length lo cual nos dira el tamaño del dato que ingresamos
    char vector[tam+1];         //creamos el vector con un incremento de +1 para evitar errores y ademas se crea aqui y no arriba porque el vector en esta parte del programa ya tendra valor 
    palabra.toCharArray(vector,tam+1); //aqui se envia la palabra al vector donde se pone el nombre del vector y el tamaño que va a tener

      //de aqui en adelante solo son los juegos que deseamos poner a la palabra
      i=0;
      
      for(;i<tam+1;i++){
        lcd.setCursor(i,0);
        lcd.print(vector[i]);
        delay(100);
        }

      for(i=0;i<tam+1;i++){
        lcd.setCursor(i,0);
        lcd.print(' ');
        delay(100);
        }

      for(;i>=0;i--){
        lcd.setCursor(i,0);
        lcd.print(vector[i]);
        delay(100);
        }

      for(;i>=0;i--){
        lcd.setCursor(i,0);
        lcd.print(' ');
        delay(100);
        }
        //finalmente se limpia el lcd para que no quede nada
        lcd.clear();
    }

    
    

}
