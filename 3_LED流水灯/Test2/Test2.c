#include<reg52.h>

sbit LED4=P2^4;
sbit LED3=P2^5;
sbit LED2=P2^6;
sbit LED1=P2^7;

sbit KEY3=P3^4;

static void ForLED();
static void DelayNms(int nms);

void main()
{
  while(1)
  {
    if(0==KEY3)
    {
      while(1)
      {
        ForLED();
        if(1==KEY3)
        {
          while(1)
          {
            ForLED();
            if(0==KEY3)
            {
              break;
            }
          }
          break;
        }
      }
      break;
    }
  }
}


static void ForLED()
{
  P2=0X0F;
  DelayNms(500);
  P2=0XFF;
  DelayNms(500);
}

static void DelayNms(int nms)
{
  unsigned int i,j;
for (i=0;i<nms;i++)
{
  for(j=0;j<123;j++)
  {
  }
}  
}