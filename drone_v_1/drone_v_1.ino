void on(void);
void off(void);
void inputs(int);
int gnd = 13;
int mot = 10;
int b =1;
int in1=  9;
void stopm(void);

void setup(void)
{
 Serial.begin (9600);
 pinMode(in1,OUTPUT);  
pinMode(gnd,OUTPUT);
 digitalWrite(gnd,LOW); 
pinMode(mot,OUTPUT);

}

void loop(void) {


 char a=Serial.read(); 
while(a!='2')
{
  
 char a=Serial.read(); 
 delay(110);
 

 Serial.println(a);

 if(a=='0')
 {
  off();
  
 }
 else if(a=='1')
 {
  on();
 }
  
 else if(a=='2')
 {
  stopm();
 }

else 
{
  
//  stopm();

  off();
  }
}
}
void on(void) 
{
   digitalWrite(in1, HIGH);
    analogWrite(in1,160);/*
     digitalWrite(mot, HIGH);
    analogWrite(mot,185);
 // delay (1200);*/

  
}
void off(void) 
{
   digitalWrite(in1, LOW);
       analogWrite(in1,50);
  //delay (1200);
}
void stopm(void)
{
 digitalWrite(in1, LOW);

if (in1 == HIGH) {
  digitalWrite(mot,HIGH);
}
}
