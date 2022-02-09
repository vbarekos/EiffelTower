/*
-----------------Note----------------------
Date: 16-1-2022
Project Name: LEDs of Tour Eiffel
Author: Vasileios Barekos
*/

int LED_R1 = 12;
int LED_W1 = 3;

int LED_R2 = 2;
int LED_W2 = 7;

int LED_R3 = 10;
int LED_W3 = 5;

int LED_R4 = 8;
int LED_W4 = 0;

void setup()
{
LED_Setup();
}

void loop()
{
int L = 0;
int T = 0;

for (L = 0 ; L < 5 ; L += 1)
{
Blink_LED_R(L, 150);
Blink_LED_W(L, 150);
}

for(T=0 ; T<3000 ; T +=1)
{
digitalWrite(LED_R1, HIGH);
digitalWrite(LED_R2, HIGH);
digitalWrite(LED_R3, HIGH);
digitalWrite(LED_R4, HIGH);

digitalWrite(LED_W1, HIGH);
digitalWrite(LED_W2, HIGH);
digitalWrite(LED_W3, HIGH);
digitalWrite(LED_W4, HIGH);

}

}


int Blink_LED_W(int Line, int Speed)
{
if (Line == 1) {digitalWrite(LED_W1, HIGH);}
if (Line == 2) {digitalWrite(LED_W2, HIGH);}
if (Line == 3) {digitalWrite(LED_W3, HIGH);}
if (Line == 4) {digitalWrite(LED_W4, HIGH);}
if (Line == 0)
{
digitalWrite(LED_W1, HIGH);
digitalWrite(LED_W2, HIGH);
digitalWrite(LED_W3, HIGH);
digitalWrite(LED_W4, HIGH);
}
delay(Speed);
digitalWrite(LED_W1, LOW);
digitalWrite(LED_W2, LOW);
digitalWrite(LED_W3, LOW);
digitalWrite(LED_W4, LOW);
delay(Speed);
}

int Blink_LED_R(int Line, int Speed)
{
if (Line == 1) {digitalWrite(LED_R1, HIGH);}
if (Line == 2) {digitalWrite(LED_R2, HIGH);}
if (Line == 3) {digitalWrite(LED_R3, HIGH);}
if (Line == 4) {digitalWrite(LED_R4, HIGH);}
if (Line == 0)
{
digitalWrite(LED_R1, HIGH);
digitalWrite(LED_R2, HIGH);
digitalWrite(LED_R3, HIGH);
digitalWrite(LED_R4, HIGH);
}
delay(Speed);
digitalWrite(LED_R1, LOW);
digitalWrite(LED_R2, LOW);
digitalWrite(LED_R3, LOW);
digitalWrite(LED_R4, LOW);
delay(Speed);
}

void LED_Setup()
{

pinMode(LED_R1, OUTPUT);
pinMode(LED_R2, OUTPUT);
pinMode(LED_R3, OUTPUT);
pinMode(LED_R4, OUTPUT);

pinMode(LED_W1, OUTPUT);
pinMode(LED_W2, OUTPUT);
pinMode(LED_W3, OUTPUT);
pinMode(LED_W4, OUTPUT);

}
