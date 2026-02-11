#include<8052.h>

void delay(void)
{
    for(unsigned char i=0;i<100;i++)
    {
        for(unsigned char j=0;j<100;j++)
        {

        }
    }
}

void main(void)
{
    //8*8
    P0_7=0;        delay();
    P0_6=0;        delay();
    P0_5=0;        delay();
    P0_4=0;        delay();
    P0_3=0;        delay();
    P0_2=0;        delay();
    P0_1=0;        delay();
    P0_0=0;        delay();
    P0_7=1;        delay();
    P0_6=1;        delay();
    P0_5=1;        delay();
    P0_4=1;        delay();
    P0_3=1;        delay();
    P0_2=1;        delay();
    P0_1=1;        delay();
    P0_0=1;        delay();

    P0_0=0;        delay();
    P0_1=0;        delay();
    P0_2=0;        delay();
    P0_3=0;        delay();
    P0_4=0;        delay();
    P0_5=0;        delay();
    P0_6=0;        delay();
    P0_7=0;        delay();
    P0_0=1;        delay();
    P0_1=1;        delay();
    P0_2=1;        delay();
    P0_3=1;        delay();
    P0_4=1;        delay();
    P0_5=1;        delay();
    P0_6=1;        delay();
    P0_7=1;        delay();
}