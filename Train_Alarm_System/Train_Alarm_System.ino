//Distance Limit
#define limit1 24
#define limit2 21 
#define limit3 19
#define limit4 16
#define limit5 9

//PIN Connection Declaration
const int trigPin = 2;
const int echoPin = 3;

const int LED1 = A4;
const int LED2 = A3;
const int LED3 = A2;
const int LED4 = A0;
const int LED5 = A1;

//Variable Declaration
int duration = 0;
int distance = 0;

void setup()
{

  //Initialize Input Output
  pinMode(trigPin , OUTPUT);
  pinMode(echoPin , INPUT);

  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);

  Serial.begin(9600);

}

void loop() {
  //Measure Distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 58.2);
  Serial.println(distance);


//Program Logic
  if ( distance <= limit5 ) { 
    digitalWrite(LED1, HIGH);
  }
  else {
    digitalWrite(LED1, LOW);
  }
  if ( distance <= limit4 ) {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }
  if ( distance <= limit3 ) {
    digitalWrite(LED3, HIGH);
  }
  else {
    digitalWrite(LED3, LOW);
  }
  if ( distance <= limit2 ) {
    digitalWrite(LED4, HIGH);
  }
  else {
    digitalWrite(LED4, LOW);
  }
  if ( distance <= limit1 ) {
    digitalWrite(LED5, HIGH);
  }
  else {
    digitalWrite(LED5, LOW);
  }
  delay(100);
}
