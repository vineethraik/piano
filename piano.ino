int x;
int y=500;    //delay for tones
void setup()
{
 pinMode(12,OUTPUT);
 pinMode(2,INPUT);
 pinMode(3,INPUT);
 pinMode(4,INPUT);
 pinMode(5,INPUT);
 pinMode(6,INPUT);
 pinMode(7,INPUT);
 pinMode(8,INPUT);
 Serial.begin(9600);
}

void loop()
{
  x=0;
if(digitalRead(2)==HIGH)
{
  x=240;
 tone(12,x,y);
}
else if(digitalRead(3)==HIGH)
{
  x=270;
  tone(12,x,y);
}
else if(digitalRead(4)==HIGH)
{
  x=300;
  tone(12,x,y);
}
else if(digitalRead(5)==HIGH)
{
  x=320;
  tone(12,x,y);
}
else if(digitalRead(6)==HIGH)
{
  x=360;
  tone(12,x,y);
}
else if(digitalRead(7)==HIGH)
{
  x=400;
  tone(12,x,y);
}
else if(digitalRead(8)==HIGH)
{
  x=450;
  tone(12,x,y);
}
Serial.println(x);
}
