//Sensores
int sensorValueIzq = 0;
int sensorIzqPin = A2;
int sensorValueDer = 0;
int sensorDerPin = A3;

int motorDerPinD = 6;
int motorDerPinR = 7;

int motorIzqPinD = 10;
int motorIzqPinR = 11;

int outputValue = 0;
int outputValue2 = 0;

void setup()
{ 
  Serial.begin(9600);
  pinMode(motorDerPinD,OUTPUT);
  pinMode(motorDerPinR,OUTPUT);
  pinMode(motorIzqPinD, OUTPUT);
  pinMode(motorIzqPinR, OUTPUT);
}

void loop()
{
  sensorValueIzq = analogRead(sensorIzqPin);//Lee sensor Izquierdo
  sensorValueDer = analogRead(sensorDerPin); //Lee sensor Derecho
  
  String sen = "Sensor izquierdo = ";
  Serial.println(sen + sensorValueIzq);
  String sen2 = "Sensor derecho = ";
  Serial.println(sen2 + sensorValueDer);
  
}

void MotorDerAdelante()
{
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}

void MotorDerAtras()
{
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}

void MotorIzqAdelante()
{
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}

void MotorIzqAtras()
{
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
}

void MotoresAdelante()
{
  motorDerAdelante();
  motorIzqAdelante();
}
