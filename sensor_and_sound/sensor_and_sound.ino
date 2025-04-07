int trig = 9;
int echo = 8;
int buzzer = 11;

void setup() {
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop() {

int duration,distance;
digitalWrite(trig,HIGH);
delay(1);
digitalWrite(trig,LOW);
duration = pulseIn(echo,HIGH);
distance = (duration/2)/29.1;
Serial.println("cm");
Serial.print(distance);
delay(10);

if(distance<=40) // angled bracket are not allowed in youtube discription, so make this as "distance is less than or equal to 20"
{
  digitalWrite(buzzer,HIGH);
  }
else
{
 digitalWrite(buzzer,LOW); 
  }
}