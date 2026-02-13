#include<8052.h>

#define SER   P3_4
#define RCLK  P3_5
#define SRCLK P3_6

unsigned char dl=10;//scan speed

void delay(unsigned char);
void row_ctrl(unsigned char data);

void delay(unsigned char dl)
{
    for(unsigned char i=0;i<dl;i++)
    {
        for(unsigned char j=0;j<dl;j++)
        {

        }
    }
}

void row_ctrl(unsigned char data)
{
    for(unsigned char i=0;i<8;i++)
    {
        SRCLK=0;
        SER=data & 0x80;
        data<<=1;
        SRCLK=1;
    }
    RCLK=0;
    RCLK=1;
}


void letter_H(void)
{
    unsigned char data1=0xFF;
    unsigned char data2=0x18;

    row_ctrl(data1);
    P0_0=0;
    delay(dl);
    P0_0=1;
    P0_1=0;
    delay(dl);
    P0_1=1;
    
    row_ctrl(data2);
    P0_2=0;
    delay(dl);
    P0_2=1;
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data1);
    P0_6=0;
    delay(dl);
    P0_6=1;
    P0_7=0;
    delay(dl);
    P0_7=1;
}

void letter_A(void)
{
    unsigned char data1=0xF8;
    unsigned char data2=0x66;
    unsigned char data3=0x67;

    row_ctrl(data1);
    P0_0=0;
    delay(dl);
    P0_0=1;
    P0_1=0;
    delay(dl);
    P0_1=1;

    row_ctrl(data2);
    P0_2=0;
    delay(dl);
    P0_2=1;

    row_ctrl(data3);
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;

    row_ctrl(data2);
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data1);
    P0_6=0;
    delay(dl);
    P0_6=1;
    P0_7=0;
    delay(dl);
    P0_7=1;

}

void letter_P(void)
{
    unsigned char data1=0xC;
    unsigned char data2=0x1E;
    unsigned char data3=0x3F;
    unsigned char data4=0x33;
    unsigned char data5=0xFF;

    P0=0xFF;
    row_ctrl(data1);
    P0_0=0;
    delay(dl);

    P0=0xFF;
    row_ctrl(data2);
    P0_1=0;
    delay(dl);

    P0=0xFF;
    row_ctrl(data3);
    P0_2=0;
    delay(dl);

    P0=0XFF;
    row_ctrl(data4);
    P0_3=0;
    delay(dl);
    P0_4=0;
    delay(dl);
    P0_5=0;
    delay(dl);

    P0=0xFF;
    row_ctrl(data5);
    P0_6=0;
    delay(dl);
    P0_7=0;
    delay(dl);
}

void letter_Y(void)
{
    unsigned char data1=0xF;
    unsigned char data2=0x1F;
    unsigned char data3=0x18;
    unsigned char data4=0xF0;  

}

void letter_N(void)
{

}

void letter_E(void)
{
    unsigned char data1=0xDB;
    unsigned char data2=0xFF;

    row_ctrl(data1);
    P0_0=0;
    delay(dl);
    P0_0=1;
    P0_1=0;
    delay(dl);
    P0_1=1;
    P0_2=0;
    delay(dl);
    P0_2=1;
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data2);
    P0_6=0;
    delay(dl);
    P0_6=1;
    P0_7=0;
    delay(dl);
    P0_7=1;
}

void letter_W(void)
{

}

void letter_R(void)
{

}


void main(void)
{
    while(1)
    {
        for(unsigned char i=0;i<100;i++)
        {
            letter_H();
        }
        P0=0xFF;
        delay(500);
        //letter_A();
        //letter_P();
        //letter_P();
        //letter_Y();

        //letter_N();
        for(unsigned char i=0;i<100;i++)
        {
            letter_E();
        }
        P0=0xFF;
        delay(500);
        //letter_W();

        //letter_Y();delay(50);
        //letter_E();delay(50);
        //letter_A();delay(50);
        //letter_R();delay(50);
    }
}