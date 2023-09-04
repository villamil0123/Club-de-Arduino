///Definimos variables///
const int ledr=13,leda=12,ledv=11;
int cont;



void setup()
{
  
  pinMode(ledr, OUTPUT); 
  pinMode(leda,OUTPUT);
  pinMode(ledv,OUTPUT);
}

void loop()
{
  digitalWrite(ledr,HIGH);
  delay(10000);
       for(cont=0;cont<15;cont++){
        digitalWrite(ledr,HIGH);
         delay(500);
          digitalWrite(ledr,LOW);
           delay(500);
  }
  digitalWrite(ledr,LOW);
  digitalWrite(leda,HIGH);
  delay(6000);
  for(cont=0;cont<10;cont++){
        digitalWrite(leda,HIGH);
         delay(500);
          digitalWrite(leda,LOW);
           delay(500);
  }
  digitalWrite(leda,LOW);
  digitalWrite(ledv,HIGH);
  delay(3000);
  for(cont=0;cont<5;cont++){
        digitalWrite(ledv,HIGH);
         delay(500);
          digitalWrite(ledv,LOW);
           delay(500);
  }
  
}

