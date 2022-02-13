int DATOS=0;
//MOTOR
int motor1D=2;
int motor1I=3;
int motor2D=10;
int motor2I=11;
int vel=120;

void setup() {
Serial.begin(9600);
pinMode(motor1D, OUTPUT);
pinMode(motor1I, OUTPUT);
pinMode(motor2D, OUTPUT);
pinMode(motor2I, OUTPUT);
analogWrite(motor1D,0);
analogWrite(motor1I,0);
analogWrite(motor2D,0);
analogWrite(motor2I,0);
}

void loop() {
if (Serial.available()>0)
{ DATOS= Serial.read();
//ADELANTE
if(DATOS=='1')
{analogWrite(motor1D,vel);
analogWrite(motor1I,0);
analogWrite(motor2D,vel);
analogWrite(motor2I,0);
}
//ATRAS
if(DATOS=='2')
{analogWrite(motor1D,120);
analogWrite(motor1I,0);
analogWrite(motor2D,0);
analogWrite(motor2I,vel);
}
//IZQUIERDA
if(DATOS=='3')
{analogWrite(motor1D,vel);
analogWrite(motor1I,0);
analogWrite(motor2D,0);
analogWrite(motor2I,0);
}
//DERECHA
if(DATOS=='4')
{analogWrite(motor1D,0);
analogWrite(motor1I,0);
analogWrite(motor2D,0);
analogWrite(motor2I,60);
}
//DETENER
if(DATOS=='5')
{analogWrite(motor1D,0);
analogWrite(motor1I,0);
analogWrite(motor2D,0);
analogWrite(motor2I,0);
}
}
}
