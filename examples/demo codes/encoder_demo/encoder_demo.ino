
#include "NewEncoder.h"

// Create  instances of the NewEncoder class
NewEncoder firstEncoder;

void setup()
{
    firstEncoder.begin(15, 16);    // Initialize first encoder
    Serial.begin(115200);
}
unsigned long delayTime = 0;
void loop()
{
    firstEncoder.Update(); // Call this functions as frequently as possible (in this case, each loop)
    if (millis() - delayTime < 200) // Optimized delay
        return;
    delayTime = millis();
    PrintData();
}

void PrintData()
{
    Serial.println("//First encoder//");
    Serial.print("Steps: \t");
    Serial.println(firstEncoder.GetSteps());
    Serial.print("Degrees: \t-\t");
    Serial.println(firstEncoder.Degrees(), 16);
    Serial.println();
}
