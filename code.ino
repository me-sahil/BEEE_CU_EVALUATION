const int b1=2;
const int b2=4;
const int led1=8;
const int led2=12;
int b1state=0;
int b2state=0;
void setup()
{
    pinMode(b1,INPUT);
    pinMode(b2,INPUT);
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    int c=analogRead(A0);
    delay(100);
    b1state=digitalRead(b1);
    b2state=digitalRead(b2);
    
    if(c>300)
    {
        if(b1state==HIGH || b2state==HIGH)
        digitalWrite(12,HIGH);
        
        if(b1state==HIGH && b2state==HIGH)
        digitalWrite(8,HIGH);
        
      	else
        {
        digitalWrite(8,LOW);
        digitalWrite(12,LOW);
        }
    }
}