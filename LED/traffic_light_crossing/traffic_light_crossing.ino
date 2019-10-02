int rojo1=9;
int amarillo1=5;
int verde1=0;
int rojo2=2;
int amarillo2=6;
int verde2=10;
void setup () {
pinMode(rojo1,OUTPUT);// LED Rojo1
pinMode(amarillo1,OUTPUT);// LED Amarillo1
pinMode(verde1,OUTPUT);// LED Verde1
pinMode(rojo2,OUTPUT);// LED Rojo2
pinMode(amarillo2,OUTPUT);// LED Amarillo2
pinMode(verde2,OUTPUT);// LED Verde2
}

void loop () {
  digitalWrite(rojo1,HIGH);
  digitalWrite(verde2,HIGH);
  delay(5000);//Queda encendido 2 segundos
  digitalWrite(verde2,LOW);
  digitalWrite(amarillo2,HIGH);
  delay(1000);
   digitalWrite(amarillo2,LOW);
  digitalWrite(rojo2,HIGH);
   digitalWrite(verde1,HIGH);
  digitalWrite(rojo1,LOW);

  delay(5000);
    digitalWrite(verde1,LOW);
  digitalWrite(amarillo1,HIGH);
  delay(1000);
  digitalWrite(amarillo1,LOW);
 digitalWrite(rojo2,LOW);
  
}
