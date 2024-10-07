#include <reg52.h>

static void DelayNms(int num);
sbit LED1 = P2^4;
sbit LED2 = P2^5;
sbit LED3 = P2^6;
sbit LED4 = P2^7;

void main()
{
  while(1)
  {
    LED1=0;
    DelayNms(500);
    LED1=~LED1;
    
    LED2=0;
    DelayNms(500);
    LED2=~LED2;
    
    LED3=0;
    DelayNms(500);
    LED3=~LED3;
    
    LED4=0;
    DelayNms(500);
    LED4=~LED4;
  }
}

static void DelayNms(int nms)
{
  unsigned int i,j;
  for(i=0;i<nms;i++)
  {
    for(j=0;j<123;j++)
     {
     }
  }
}
  