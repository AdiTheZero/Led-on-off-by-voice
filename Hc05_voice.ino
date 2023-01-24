// int green = 3;
int blue = 13;
// int Red = 5;

void setup() {
  Serial.begin(9600);
  // pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  // pinMode(Red,OUTPUT);
  

}


char c;
String voice;

void loop() {
  if (Serial.available()>0)
  {
    voice="";
    voice=Serial.readString();
    Serial.print(voice+'\n');
  }

  // if(voice=="green")
  // {
  //   digitalWrite(3,HIGH);
  // } else if(voice=="green off")
  // {
  //   digitalWrite(green,LOW);
  // }

    if(voice=="light on")
  {
    digitalWrite(13,0);
  } else if(voice=="light off")
  {
    digitalWrite(blue,1);
  }

  
  // if(voice=="red")
  // {
  //   digitalWrite(Red,HIGH);
  // } else if(voice=="read off")
  // {
  //   digitalWrite(Red,LOW);
  // }

}
