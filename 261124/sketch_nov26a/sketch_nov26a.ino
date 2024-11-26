int ak=6;
int as=5;
int ay=4;
int yk=3;
int yy=2;
void setup()
{
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
}

void loop()
{
 digitalWrite(ak, HIGH);
  digitalWrite(as,LOW);
  digitalWrite(ay,LOW);
  digitalWrite(yy,1);
  digitalWrite(yk,0);   
  delay(3000);
  
  digitalWrite(ak,0);
  digitalWrite(as,1);
  digitalWrite(ay,0);
  digitalWrite(yy,0);
  digitalWrite(yk,1);
  delay(1000);
  
  digitalWrite(ak,0);
  digitalWrite(as,0);
  digitalWrite(ay,1);
  digitalWrite(yy,0);
  digitalWrite(yk,1);
  delay(6000);
  
  digitalWrite(ak,0);
  digitalWrite(as,1);
  digitalWrite(ay,0);
  digitalWrite(yy,0);
  digitalWrite(yk,1);
  delay(1000);
}