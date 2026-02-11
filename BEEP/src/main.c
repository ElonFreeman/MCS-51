#include<8052.h>
#define BEEP P2_5

void delay_beep(unsigned int ms)
{
    for(unsigned char i=0;i<ms;i++)
    {
        
    }
}

void main(void)
{
    for(int i=0;i<1000;i++)
    {
        BEEP=1;        delay_beep(25);
        BEEP=0;        delay_beep(25);
    }
    while(1)
    {
        for(int i=0;i<100;i++)
        {
            BEEP=1;        delay_beep(i);
            BEEP=0;        delay_beep(i);
        }
        for(int i=100;i>=0;i--)
        {
            BEEP=1;        delay_beep(i);
            BEEP=0;        delay_beep(i);
        }
    }
}