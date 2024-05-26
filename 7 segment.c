#include<pic.h>
__CONFIG(0X3D72);
int i;
#define _XTAL_FREQ 20000000
void delay();
void  main()
{
 
 TRISB=0X00;
 PORTB=0X00;
 while(1)
 {
  PORTB=0X03;
  delay();
  PORTB=0X9F;
  delay();
  PORTB=0X25;
  delay();
  PORTB=0X0D;
  delay();
  PORTB=0X99;
  delay();
  PORTB=0X49;
  delay();
  PORTB=0X41;
  delay();
  PORTB=0X1F;
  delay();
  PORTB=0X01;
  delay();
  PORTB=0X09;
  delay();
  }
 } 
void delay()
{
 for(i=0;i<150;i++)
 __delay_ms(10);
 }

 

  