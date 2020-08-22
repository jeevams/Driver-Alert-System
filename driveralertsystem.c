
#define SENSE A0 

void setup()
{
pinMode(SENSE, INPUT);
pinMode(10, OUTPUT);


pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{

  if(digitalRead(SENSE))
  {
   digitalWrite(LED_BUILTIN, LOW);
   pinMode(10, LOW);
 }
 else
 {
   digitalWrite(LED_BUILTIN, HIGH);  
   pinMode(10, HIGH);
  }
}
