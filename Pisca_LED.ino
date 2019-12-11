    void setup()
    {
      //pino digital 5
      pinMode(5, OUTPUT);
    }
    void loop()
    {
      digitalWrite(5, HIGH);
      delay(1000);
      digitalWrite(5, LOW);
      delay(1000);
    }
