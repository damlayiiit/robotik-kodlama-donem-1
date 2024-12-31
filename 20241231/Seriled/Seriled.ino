int sari=3;
int kirmizi=4;
String girilen="";
void setup() {
 Serial.begin(9600);
 pinMode(sari,OUTPUT);
 pinMode(kirmizi,OUTPUT);
 Serial.print("sari icin s kirmizi icin k ye bas=");
}

void loop() {
 if(Seeial.available{}){
  girilen=Serial.readString();
  Serial.print("sari icin s kirmizi icin k ye bas=");
  Serial.println(girilen);
  if(girilen=="s"){
    Serial.println("SARI YANDI");
    digitalWrite(sari,1);
    delay(3000);
    digitalWrite(sari,0);
  }
  if(girilen=="k"){
    Serial.println("KIRMIZI YANDI");
    digitalWrite(kirmizi,1);
    delay(3000);
    digitalWrite(kirmizi,0);
  }
 }

}
