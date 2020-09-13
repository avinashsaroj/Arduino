int IRSensor = 10; // connect ir sensor to arduino pin 2
int LED = 13; // conect Led to arduino pin 13
int x;


void setup() 
{



  pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
  x=0;
  if (statusSensor == 1){
    
    if (digitalRead(LED)==LOW){
    digitalWrite(LED, HIGH);
    }
    if(digitalRead(LED)==HIGH){
      digitalWrite(LED,LOW);

    }
    }
  }
 

  
