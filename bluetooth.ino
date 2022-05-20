int led_1 = 22;
int led_2 = 23;

char valor;

void setup() {

pinMode(led_1,OUTPUT);
pinMode(led_2,OUTPUT);
Serial.begin(9600);
}

void loop()
{  
  if(Serial.available())
  {
    valor = Serial.read();

    if (valor =='A')
    { 
      digitalWrite(led_1,HIGH);
    }
    if (valor=='B')
     {
      digitalWrite(led_1,LOW);
     }
     if (valor=='C')
     { 
      digitalWrite(led_2,HIGH);
     }
     if (valor== 'D')
     {
      digitalWrite(led_2,LOW);
     }
  }
}
