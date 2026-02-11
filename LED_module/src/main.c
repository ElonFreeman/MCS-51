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
    //跑马灯
        P2_0=0;        delay();        P2_0=1;        delay();
        P2_1=0;        delay();        P2_1=1;        delay();
        P2_2=0;        delay();        P2_2=1;        delay();
        P2_3=0;        delay();        P2_3=1;        delay();
        P2_4=0;        delay();        P2_4=1;        delay();
        P2_5=0;        delay();        P2_5=1;        delay();
        P2_6=0;        delay();        P2_6=1;        delay();
        P2_7=0;        delay();        P2_7=1;        delay();

        P2_7=0;        delay();        P2_7=1;        delay();
        P2_6=0;        delay();        P2_6=1;        delay();
        P2_5=0;        delay();        P2_5=1;        delay();
        P2_4=0;        delay();        P2_4=1;        delay();
        P2_3=0;        delay();        P2_3=1;        delay();
        P2_2=0;        delay();        P2_2=1;        delay();
        P2_1=0;        delay();        P2_1=1;        delay();
        P2_0=0;        delay();        P2_0=1;        delay();
        
    //流水灯
        P2_0=0;        delay();
        P2_1=0;        delay();
        P2_2=0;        delay();
        P2_3=0;        delay();
        P2_4=0;        delay();
        P2_5=0;        delay();
        P2_6=0;        delay();
        P2_7=0;        delay();
        P2_0=1;        delay();
        P2_1=1;        delay();
        P2_2=1;        delay();
        P2_3=1;        delay();
        P2_4=1;        delay();
        P2_5=1;        delay();
        P2_6=1;        delay();
        P2_7=1;        delay();

        P2_7=0;        delay();
        P2_6=0;        delay();
        P2_5=0;        delay();
        P2_4=0;        delay();
        P2_3=0;        delay();
        P2_2=0;        delay();
        P2_1=0;        delay();
        P2_0=0;        delay();
        P2_7=1;        delay();
        P2_6=1;        delay();
        P2_5=1;        delay();
        P2_4=1;        delay();
        P2_3=1;        delay();
        P2_2=1;        delay();
        P2_1=1;        delay();
        P2_0=1;        delay();
}