void on(void);
void off(void);
void inputs(int);
int gnd = 13;
int mot2 = 10;
int mot1=  9;
void stopm(void);

void setup(void)
{
 Serial.begin (9600);
 pinMode(mot1,OUTPUT);  
pinMode(gnd,OUTPUT);
 digitalWrite(gnd,LOW); 
pinMode(mot2,OUTPUT);

}

void loop(void)
{


 char a=Serial.read(); 
  while(a!='2')
  {
  
 char a=Serial.read(); 
 delay(110);
 

 Serial.println(a);

 
       if(a=='1')
        {
           on();
        }
      else 
      {
        off();
       }
  }
}
void on(void) 
{
   digitalWrite(mot1, HIGH);
    analogWrite(mot1,160);
    delay(43);
     digitalWrite(mot2, HIGH);
    analogWrite(mot2,160);
 // delay (110);
  
}
void off(void) 
{
    digitalWrite(mot1, HIGH);
    analogWrite(mot1,50);
    
     digitalWrite(mot2, HIGH);
    analogWrite(mot2,50);
  delay (110);

  //delay (1200);
}
