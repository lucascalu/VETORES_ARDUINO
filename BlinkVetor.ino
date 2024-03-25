// vetores

//int led1;
//int led2;

int led[2];//DEFINIR QUANTOS LEDS TERA O CONJUNTO

void setup()
{
  //led1=13;
  //led2=12;
  led[0] = 13;//DEFINO QUAL LED VOU REFERENCIAR
  led[1] = 12;
  
  //pinMode(led1, OUTPUT);
  //pinMode(led2, OUTPUT);
  pinMode(led[0], OUTPUT);//DEFINO COMO O LED VAI SE COMPORTAR
  pinMode(led[1], OUTPUT);
}

void loop()
{
  //digitalWrite(led1, HIGH);
  
  digitalWrite(led[0], HIGH);//REALIZO AÇÃO DO LED
  digitalWrite(led[1], HIGH);
  delay(1000); 
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], LOW);
  delay(1000); 
}
