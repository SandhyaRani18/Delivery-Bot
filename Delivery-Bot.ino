#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
char auth[] = "";  //authentication code
//your WiFi credentials
//set password to "" for open networks
char ssid[] = "tejeswar";
char pass[] = "teju12345";

#define m1 D0;
#define m2 D1;
#define m3 D2;
#define m4 D3;
#define m5 D4;

void setup() {
  // put your setup code here, to run once:
Blynk.begin(auth, ssid, pass);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(m5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D0,LOW);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);

  digitalWrite(D0,HIGH);
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  
Blynk.run();

}
