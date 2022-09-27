#define button 9
#define dot 6
#define k1 3
#define k2 4
#define k3 13
#define k4 8
#define k5 7
#define k6 2
#define k7 5
int counter = 0;

void setup()
{
        pinMode(button, INPUT_PULLUP);
        pinMode(k1, OUTPUT);
        pinMode(k2, OUTPUT);
        pinMode(k3, OUTPUT);
        pinMode(k4, OUTPUT);
        pinMode(k5, OUTPUT);
        pinMode(k6, OUTPUT);
        pinMode(k7, OUTPUT);
        pinMode(dot, OUTPUT);
        
        Serial.begin(9600);
        digitalWrite(dot, LOW);
}

void loop()
{
        if (!digitalRead(button)) counter++;
        if (counter == 10) counter = 0;

        if (counter == 1)
        {
          digitalWrite(k2, HIGH);
          digitalWrite(k3, HIGH);
          digitalWrite(k1 , LOW);
          digitalWrite(k4 , LOW);
          digitalWrite(k5 , LOW);
          digitalWrite(k6 , LOW);
          digitalWrite(k7 , LOW);
        }

        if (counter == 2)
        {
          digitalWrite(k2, LOW);
          digitalWrite(k3, HIGH);
          digitalWrite(k1 , HIGH);
          digitalWrite(k4 , HIGH);
          digitalWrite(k5 , LOW);
          digitalWrite(k6 , HIGH);
          digitalWrite(k7 , HIGH);
        }

        if (counter == 3)
        {
          digitalWrite(k2, LOW);
          digitalWrite(k3, LOW);
          digitalWrite(k1 , HIGH);
          digitalWrite(k4 , HIGH);
          digitalWrite(k5 , HIGH);
          digitalWrite(k6 , HIGH);
          digitalWrite(k7 , HIGH);
        }

        if (counter == 4)
        {
          digitalWrite(k2, HIGH);
          digitalWrite(k3, LOW);
          digitalWrite(k1 , LOW);
          digitalWrite(k4 , LOW);
          digitalWrite(k5 , HIGH);
          digitalWrite(k6 , HIGH);
          digitalWrite(k7 , HIGH);
        }

        if (counter == 5)
        {
          digitalWrite(k2, HIGH);
          digitalWrite(k3, LOW);
          digitalWrite(k1 , HIGH);
          digitalWrite(k4 , HIGH);
          digitalWrite(k5 , HIGH);
          digitalWrite(k6 , LOW);
          digitalWrite(k7 , HIGH);
        }

        if (counter == 6)
        {
          digitalWrite(k2, HIGH);
          digitalWrite(k3, HIGH);
          digitalWrite(k1 , HIGH);
          digitalWrite(k4 , HIGH);
          digitalWrite(k5 , HIGH);
          digitalWrite(k6 , LOW);
          digitalWrite(k7 , HIGH);
        }

        if (counter == 7)
        {
          digitalWrite(k2, LOW);
          digitalWrite(k3, LOW);
          digitalWrite(k1 , HIGH);
          digitalWrite(k4 , LOW);
          digitalWrite(k5 , HIGH);
          digitalWrite(k6 , HIGH);
          digitalWrite(k7 , LOW);
        }

        if (counter == 8)
        {
          digitalWrite(k2, HIGH);
          digitalWrite(k3, HIGH);
          digitalWrite(k1 , HIGH);
          digitalWrite(k4 , HIGH);
          digitalWrite(k5 , HIGH);
          digitalWrite(k7 , HIGH);
        }

        if (counter == 9)
        {
          digitalWrite(k2, HIGH);
          digitalWrite(k3, LOW);
          digitalWrite(k1 , HIGH);
          digitalWrite(k4 , HIGH);
          digitalWrite(k5 , HIGH);
          digitalWrite(k7 , HIGH);
        }

        if (counter == 0)
        {
          digitalWrite(k2, HIGH);
          digitalWrite(k3, HIGH);
          digitalWrite(k1, HIGH);
          digitalWrite(k4, HIGH);
          digitalWrite(k5, HIGH);
          digitalWrite(k6, HIGH);
          digitalWrite(k7, LOW);
        }

        delay(200);
        
}
