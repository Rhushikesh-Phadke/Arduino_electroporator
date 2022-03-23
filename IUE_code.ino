int relay = 2;				//Digital pin used to connect to relay
int footpedal =A0;			//Ananlog pin used to connect to footpedal
int foot = 0;
int count=0;				//Counter for number of pulses


void setup() {
  
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
   
}

void loop() {

  foot = analogRead(footpedal);		//take footpedal input
  
  if (foot==1023)					//replace 1023 by the number your footpedal shows when pressed
  {
    Serial.println(foot);		
    count=0;
    while(count<4)					//Change 4 to desired number of pulses
    {
      digitalWrite(relay,HIGH);
      delay(50);					//Duration of each pulse
      digitalWrite(relay,LOW);
      delay(500);					//Inter pulse interval
      count=count+1;
    }
  }
  
  
}
