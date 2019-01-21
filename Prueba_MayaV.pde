
// si aplasta espacio hace rawr y camina

int x=0;
int y=0;

void setup(){
  size(1000,600);
   background(255);

}

void draw(){
 
dinosaurio();

}



void dinosaurio(){
  
  
beginShape();
 fill(0);
  
  vertex(30+x,90+y);
  vertex(40+x,90+y);
  vertex(40+x,110+y);
  vertex(50+x,110+y);
  vertex(50+x,120+y);
  vertex(60+x,120+y);
  vertex(60+x,130+y);
  vertex(80+x,130+y);
  vertex(80+x,120+y);
  vertex(90+x,120+y);
  vertex(90+x,110+y);
  vertex(100+x,110+y);
  vertex(100+x,100+y);
  vertex(110+x,100+y);
  vertex(110+x,90+y);
  vertex(120+x,90+y);
  vertex(120+x,50+y);
  vertex(130+x,50+y);
  vertex(130+x,40+y);
  vertex(190+x,40+y);
  vertex(190+x,50+y);
  vertex(200+x,50+y);
  vertex(200+x,90+y);
  vertex(150+x,90+y);
  vertex(150+x,100+y);
  vertex(180+x,100+y);
  vertex(180+x,110+y);
  vertex(140+x,110+y);
  vertex(140+x,120+y);
  vertex(160+x,120+y);
  vertex(160+x,140+y);
  vertex(150+x,140+y);
  vertex(150+x,130+y);
  vertex(140+x,130+y);
  vertex(140+x,160+y);
  vertex(130+x,160+y);
  vertex(130+x,170+y);
  vertex(120+x,170+y);
  vertex(120+x,180+y);
  vertex(110+x,180+y);

  vertex(60+x,180+y);
  vertex(50+x,180+y);
  vertex(50+x,170+y);
  vertex(40+x,170+y);
  vertex(40+x,160+y);
  vertex(30+x,160+y);
  vertex(30+x,90+y);
  
  endShape();
  
  beginShape();
  fill(255);
  vertex(150+x,60+y);
  vertex(160+x,60+y);
  vertex(160+x,70+y);
  vertex(150+x,70+y);
  vertex(150+x,60+y);
  endShape();




}

void keyPressed(){
  background(255);
  fill(0);
println(keyCode);   
textSize(20);
text(keyCode,100,50);
switch(keyCode){
case 38:
y=y-1;
caminaday();
break;
case 40:
y=y+1;
caminaday();
break;
case 39:

x=x+1;
caminadax();
break;
case 37:
x=x-1;
caminadax();
break;
case 32:
fill(255);
beginShape();
fill(250);
vertex(210+x,100+y);
vertex(230+x,80+y);
vertex(230+x,60+y);
vertex(300+x,60+y);
vertex(300+x,100+y);
vertex(210+x,100+y);
endShape();

fill(0);
textSize(20);
text("RAWR!!",230+x,90+y);
  beginShape();
  
break;

 
}
}


void caminadax(){

if(x%2==0){
  beginShape();
  fill(0);
  vertex(110+x,180+y);
  vertex(110+x,210+y);
  vertex(120+x,210+y);
  vertex(120+x,220+y);
  vertex(100+x,220+y);
  vertex(100+x,190+y);
  vertex(90+x,190+y);
  vertex(90+x,180+y);
  vertex(80+x,180+y);
  vertex(80+x,190+y);
  vertex(70+x,190+y);
  vertex(70+x,200+y);
  vertex(80+x,200+y);
  vertex(80+x,210+y);
  vertex(60+x,210+y);
  vertex(60+x,180+y);
  vertex(110+x,180+y);
  endShape();
}else{
  background(255);
beginShape();
fill(0);
vertex(110+x,190+y);
vertex(110+x,200+y);
vertex(120+x,200+y);
vertex(120+x,210+y);
vertex(100+x,210+y);
vertex(100+x,190+y);
vertex(90+x,190+y);
  vertex(90+x,180+y);
  vertex(80+x,180+y);
  vertex(80+x,190+y);
  vertex(70+x,190+y);
  vertex(70+x,210+y);
  vertex(80+x,210+y);
  vertex(80+x,220+y);
  vertex(60+x,220+y);
  vertex(60+x,180+y);
  vertex(110+x,180+y);
endShape();
}
}

void caminaday(){

if(y%2==0){
  beginShape();
  fill(0);
  vertex(110+x,180+y);
  vertex(110+x,210+y);
  vertex(120+x,210+y);
  vertex(120+x,220+y);
  vertex(100+x,220+y);
  vertex(100+x,190+y);
  vertex(90+x,190+y);
  vertex(90+x,180+y);
  vertex(80+x,180+y);
  vertex(80+x,190+y);
  vertex(70+x,190+y);
  vertex(70+x,200+y);
  vertex(80+x,200+y);
  vertex(80+x,210+y);
  vertex(60+x,210+y);
  vertex(60+x,180+y);
  vertex(110+x,180+y);
  endShape();
}else{
  background(255);
beginShape();
fill(0);
vertex(110+x,190+y);
vertex(110+x,200+y);
vertex(120+x,200+y);
vertex(120+x,210+y);
vertex(100+x,210+y);
vertex(100+x,190+y);
vertex(90+x,190+y);
  vertex(90+x,180+y);
  vertex(80+x,180+y);
  vertex(80+x,190+y);
  vertex(70+x,190+y);
  vertex(70+x,210+y);
  vertex(80+x,210+y);
  vertex(80+x,220+y);
  vertex(60+x,220+y);
  vertex(60+x,180+y);
  vertex(110+x,180+y);
endShape();
}
}
