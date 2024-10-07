#include <reg52.h>

sbit LED1 = P2^7;
sbit LED2 = P2^6;
sbit LED3 = P2^5;
sbit LED4 = P2^4;

sbit KEY1 = P3^2;
sbit KEY2 = P3^3;
sbit KEY3 = P3^4;

#define BEEP_ON 0
#define BEEP_OFF 1

static void DelayNms(int nms);
static void FlashLEDs();
static void WaitForButtonRelease();

typedef enum {
  FUNCTION_OFF,
  FUNCTION_ON
} FunctionState;

void main()
{
  FunctionState functionState = FUNCTION_OFF;

  while(1)
  {
    if (KEY1 == 0)
    {
      DelayNms(50);
      if (KEY1 == 0)
      {
        if (functionState == FUNCTION_OFF) 
          {
            functionState = FUNCTION_ON;
          } 
        else 
          {
            functionState = FUNCTION_OFF;
          }
        while (KEY1 == 0) 
          {
            // Wait for button release
          }
      }
    }

    if (functionState == FUNCTION_ON)
      {
        FlashLEDs();
      }
  }
}

static void DelayNms(int nms)
{
  int i, j;
  for (i = 0; i < nms; i++)
  {
    for (j = 0; j < 123; j++)
    {
    }
  }
}

static void FlashLEDs()
{
  P2 = 0x0F;
  DelayNms(500);
  P2 = 0xFF;
  DelayNms(500);
}