#include <wiringPi.h>
#include <time.h>
#include <stdio.h>
int main (void)
{
  int pin_led = 0;
  int pin_sen = 2;
  wiringPiSetup () ;
  pinMode (pin_led, OUTPUT) ;
  for (;;)
  {
    if (digitalRead(pin_sen)==0)
    {
      digitalWrite (pin_led, HIGH) ;
      printf("hay humedad\n");
    }
    else
    {
      digitalWrite (pin_led,  LOW);
      printf("no hay humedad\n");
    }
    delay(500);
  }
  return 0 ;
}