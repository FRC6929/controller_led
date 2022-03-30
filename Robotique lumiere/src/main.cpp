#include <Arduino.h>

#define l1 2
#define l2 3
#define l3 4
#define l4 5
#define l5 6
#define l6 7
#define l7 8
#define l8 9
#define l9 10

char getstr;

void setup() {
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  pinMode(l7, OUTPUT);
  pinMode(l8, OUTPUT);
  pinMode(l9, OUTPUT);
  Serial.begin(9600); 
  // put your setup code here, to run once:
}

void loop() {
  getstr = Serial.read();
  if(getstr == 'a')
  {
    Serial.println("allume");
    digitalWrite(l1, HIGH);
  }
  else if(getstr == 'A')
  {
    Serial.println("ferme");
    digitalWrite(l1, LOW); 
  }
  else if(getstr == 'b')
  {
    Serial.println("allume");
    digitalWrite(l2, HIGH);
  }
  else if(getstr == 'B')
  {
    Serial.println("ferme");
    digitalWrite(l2, LOW); 
  }
  else if(getstr == 'c')
  {
    Serial.println("allume");
    digitalWrite(l3, HIGH);
  }
  else if(getstr == 'C')
  {
    Serial.println("ferme");
    digitalWrite(l3, LOW); 
  }
  else if(getstr == 'd')
  {
    Serial.println("allume");
    digitalWrite(l4, HIGH);
  }
  else if(getstr == 'D')
  {
    Serial.println("ferme");
    digitalWrite(l4, LOW); 
  }
  else if(getstr == 'e')
  {
    Serial.println("allume");
    digitalWrite(l5, HIGH);
  }
  else if(getstr == 'E')
  {
    Serial.println("ferme");
    digitalWrite(l5, LOW); 
  }
  else if(getstr == 'f')
  {
    Serial.println("allume");
    digitalWrite(l6, HIGH);
  }
  else if(getstr == 'F')
  {
    Serial.println("ferme");
    digitalWrite(l6, LOW); 
  }
  else if(getstr == 'g')
  {
    Serial.println("allume");
    digitalWrite(l7, HIGH);
  }
  else if(getstr == 'G')
  {
    Serial.println("ferme");
    digitalWrite(l7, LOW); 
  }
  else if(getstr == 'h')
  {
    Serial.println("allume");
    digitalWrite(l8, HIGH);
  }
  else if(getstr == 'H')
  {
    Serial.println("ferme");
    digitalWrite(l8, LOW); 
  }
  else if(getstr == 'i')
  {
    Serial.println("allume");
    digitalWrite(l9, HIGH);
  }
  else if(getstr == 'I')
  {
    Serial.println("ferme");
    digitalWrite(l9, LOW); 
  }
}