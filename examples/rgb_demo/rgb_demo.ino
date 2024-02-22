#include <FastLED.h>

#define DATA_PIN    8
#define NUM_LEDS    32
#define BRIGHTNESS  128
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB

// Define the array of leds
CRGB leds[NUM_LEDS];

#define UPDATES_PER_SECOND 100

void setup() {
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  // Turn the LED on
  for(int i = 0;i<=NUM_LEDS;i++)
  {
     leds[i] = CRGB::Red;
     FastLED.show();
     delay(10);
    }

  for(int i = 0;i<=NUM_LEDS;i++)
  {
     leds[i] = CRGB::Blue;
     FastLED.show();
     delay(10);
    }

  for(int i = 0;i<=NUM_LEDS;i++)
  {
     leds[i] = CRGB::Green;
     FastLED.show();
     delay(10);
    }
    
}
