int x=0;
int y=0;

void setup(){
  size(600,600);
   background(250);
}

void draw(){
  
  //con variables de limites
  
  // si el hongo se va mucho a la derecha este llega a un tope y regresa a la posicion inicial
 if(x>575){
 x=20;
 }
  // si el hongo se va mucho a la izquierda este llega a un tope y regresa a la posicion inicial
 if(x<5){
 x=20;
 }
 // si el hongo intenta cruzar la linea del medio regresa al punto inicial
 
 if(y>220){
 y=20;
 }
  // si el hongo se va para arriba este llega a un tope y regresa a la posicion inicial
 if(y<5){
 y=20;
 }
  hongo();
 
}

void keyPressed(){
  background(250);

switch(keyCode){
case 38:
y=y-1;
break;
case 40:
y=y+1;
break;
case 39:
x=x+1;
break;
case 37:
x=x-1;
break;
}
}



void hongo(){
//hongo graficado
 background(250);
  beginShape();
  fill(209,22,2);
  vertex(20+x,20+y);
  vertex(20+x,16+y);
  vertex(21+x,16+y);
  vertex(21+x,14+y);
  vertex(22+x,14+y);
  vertex(22+x,13+y);
  vertex(23+x,13+y);
  vertex(23+x,12+y);
  vertex(25+x,12+y);
  vertex(25+x,11+y);
  vertex(31+x,11+y);
  vertex(31+x,12+y);
  vertex(33+x,12+y);
  vertex(33+x,13+y);
  vertex(34+x,13+y);
  vertex(34+x,14+y);
  vertex(35+x,14+y);
  vertex(35+x,16+y);
  vertex(36+x,16+y);
  vertex(36+x,20+y);
  vertex(35+x,20+y);
  vertex(35+x,21+y);
  vertex(32+x,21+y);
  vertex(32+x,20+y);
  vertex(24+x,20+y);
  vertex(24+x,21+y);
  vertex(21+x,21+y);
  vertex(21+x,20+y);
  vertex(20+x,20+y);
  endShape();
  
  
  beginShape();
  fill(240,150,100);
  vertex(22+x,21+y);
  vertex(22+x,23+y);
  vertex(23+x,23+y);
  vertex(23+x,24+y);
  vertex(24+x,24+y);
  vertex(24+x,25+y);
  vertex(32+x,25+y);
  vertex(32+x,24+y);
  vertex(33+x,24+y);
  vertex(33+x,23+y);
  vertex(34+x,23+y);
  vertex(34+x,21+y);
  vertex(32+x,21+y);
  vertex(32+x,20+y);
  vertex(24+x,20+y);
  vertex(24+x,21+y);
  vertex(22+x,21+y);
  endShape();
  
 // linea que divide el programa
  fill(0); 
  
  line(500,250,80,250);
 
  
  
}
