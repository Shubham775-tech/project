// define pin number
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;

void setup(){
  pinMode(4 , OUTPUT);// to cantrol motor using mosfet as a switch
  pinMode(8 , OUTPUT); // to indicate using light that hand is sanitized
  pinMode(trigPin , OUTPUT);// to ultrasonic sensor
  pinMode(echoPin , INPUT);// to ultrasonic sensor
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin , LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin , HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin , LOW);

  duration = pulseIn(echoPin , HIGH);

  distance = duration*0.034/2;

  Serial.print("Distance :");
  Serial.println(distance);

  if(distance <= 8){
    delay(100);
    digitalWrite(4 , HIGH);
    digitalWrite(8 , HIGH);
    delay(3000);
    digitalWrite(4 , LOW);
    digitalWrite(8 , LOW);
  }
}
