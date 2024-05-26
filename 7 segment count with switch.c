#include<pic.h>
__CONFIG(0X3D72);
int i,b;
#define _XTAL_FREQ 20000000
void delay();
void main()
{
  TRISB=0X00;
  PORTB=0X00;
  TRISC=0X00;
  PORTC=0X00;
  RC0=1;
  int a[]={0X03,0X9F,0X25,0X0D,0X99,0X49,0X41,0X1F,0X01,0X09};
  
 if(RC0==0)
   {
    while(RC0==0);
   {
  while(1)
  {
 
    for(int b=0;b<10;b++)
    {
     PORTB=a[b];
     delay();
       }   
      }
     }
    }
   }
void delay()
{
 for(i=0;i<150;i++)
 __delay_ms(10);
 }   