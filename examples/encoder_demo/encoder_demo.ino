#include <NewEncoder.h>

// Create  instances of the NewEncoder class
NewEncoder Encoder;

void setup()
{
    Encoder.begin(15,16);    // Initialize first encoder
    Serial.begin(115200);
}
unsigned long delayTime = 0;
void loop()
{
    Encoder.Update(); // Call this functions as frequently as possible (in this case, each loop)
    if (millis() - delayTime < 200) // Optimized delay
        return;
    delayTime = millis();
    PrintData();
}

void PrintData()
{
    Serial.println("//First encoder//");
    Serial.print("Steps: \t");
    Serial.println(Encoder.GetSteps());
    Serial.print("Degrees: \t-\t");
    Serial.println(Encoder.Degrees(), 16);
    Serial.println();
}
