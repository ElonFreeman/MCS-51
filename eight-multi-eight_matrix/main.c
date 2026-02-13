#include<8052.h>

#define SER   P3_4
#define RCLK  P3_5
#define SRCLK P3_6

void letter_H(void)
{
    unsigned char data1=0x80;
    unsigned char data2=0x18;

    for(unsigned char i=0;i<8;i++)
    {
        SRCLK=0;
        SER=data1 & 10000000;
        data1<<=1;
        SRCLK=1;
    }

    RCLK=0;
    RCLK=1;
}

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