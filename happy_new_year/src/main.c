#include<8052.h>

#define SER   P3_4
#define RCLK  P3_5
#define SRCLK P3_6

unsigned char dl=2;    //scan speed  function:delay
unsigned char dlr=100; //rolling     function:delay_row

void delay(unsigned char);
void delay_row(unsigned char);
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

void delay_row(unsigned char dlr)
{
    for(unsigned char i=0;i<dlr;i++)
    {
        for(unsigned char j=0;j<dlr;j++)
        {
            for(unsigned char k=0;k<dlr;k++)
            {

            }
        }
    }
}

void row_ctrl(unsigned char data)
{
    for(unsigned char i=0;i<8;i++)
    {
        SRCLK=0;
        SER=data & 0x1;
        data>>=1;//right move
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
    unsigned char data2=0xFC;
    unsigned char data3=0x66;
    unsigned char data4=0x63;

    row_ctrl(data1);
    P0_0=0;
    delay(dl);
    P0_0=1;
    
    row_ctrl(data2);
    P0_1=0;
    delay(dl);
    P0_1=1;

    row_ctrl(data3);
    P0_2=0;
    delay(dl);
    P0_2=1;

    row_ctrl(data4);
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;

    row_ctrl(data3);
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data2);
    P0_6=0;
    delay(dl);
    P0_6=1;

    row_ctrl(data1);
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

    row_ctrl(data1);
    P0_0=0;
    delay(dl);
    P0_0=1;

    row_ctrl(data2);
    P0_1=0;
    delay(dl);
    P0_1=1;

    row_ctrl(data3);
    P0_2=0;
    delay(dl);
    P0_2=1;

    row_ctrl(data4);
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data5);
    P0_6=0;
    delay(dl);
    P0_6=1;
    P0_7=0;
    delay(dl);
    P0_7=1;
}

void letter_Y(void)
{
    unsigned char data1=0xF;
    unsigned char data2=0x1F;
    unsigned char data3=0x18;
    unsigned char data4=0xF0;  

    row_ctrl(data1);
    P0_0=0;
    delay(dl);
    P0_0=1;

    row_ctrl(data2);
    P0_1=0;
    delay(dl);
    P0_1=1;

    row_ctrl(data3);
    P0_2=0;
    delay(dl);
    P0_2=1;

    row_ctrl(data4);
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;

    row_ctrl(data3);
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data2);
    P0_6=0;
    delay(dl);
    P0_6=1;

    row_ctrl(data1);
    P0_7=0;
    delay(dl);
    P0_7=1;
}

void letter_N(void)
{
    unsigned char data1=0xFF;
    unsigned char data2=0xF0;
    unsigned char data3=0x38;
    unsigned char data4=0x1C;
    unsigned char data5=0xF;

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

    row_ctrl(data4);
    P0_4=0;
    delay(dl);
    P0_4=1;

    row_ctrl(data5);
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
    unsigned char data1=0x3F;
    unsigned char data2=0xFF;
    unsigned char data3=0xF0;
    unsigned char data4=0x3E;
    
    row_ctrl(data1);
    P0_0=0;
    delay(dl);
    P0_0=1;

    row_ctrl(data2);
    P0_1=0;
    delay(dl);
    P0_1=1;

    row_ctrl(data3);
    P0_2=0;
    delay(dl);
    P0_2=1;

    row_ctrl(data4);
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;

    row_ctrl(data3);
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data2);
    P0_6=0;
    delay(dl);
    P0_6=1;

    row_ctrl(data1);
    P0_7=0;
    delay(dl);
    P0_7=1;

}

void letter_R(void)
{
    unsigned char data1=0xC;
    unsigned char data2=0xDE;
    unsigned char data3=0xF3;
    unsigned char data4=0x73;
    unsigned char data5=0x33;
    unsigned char data6=0x13;
    unsigned char data7=0xFF;

    row_ctrl(data1);
    P0_0=0;
    delay(dl);
    P0_0=1;

    row_ctrl(data2);
    P0_1=0;
    delay(dl);
    P0_1=1;
    
    row_ctrl(data3);
    P0_2=0;
    delay(dl);
    P0_2=1;
    
    row_ctrl(data4);
    P0_3=0;
    delay(dl);
    P0_3=1;
    
    row_ctrl(data5);
    P0_4=0;
    delay(dl);
    P0_4=1;
    
    row_ctrl(data6);
    P0_5=0;
    delay(dl);
    P0_5=1;
    
    row_ctrl(data7);
    P0_6=0;
    delay(dl);
    P0_6=1;
    P0_7=0;
    delay(dl);
    P0_7=1;
    
}


void main(void)
{
    while(1)
    {
        letter_H();
        //letter_A();
        //letter_P();
        //letter_Y();
        //letter_N();
        //letter_E();
        //letter_W();
        //letter_R();



        /*for(unsigned char i=0;i<250;i++)
        {
            letter_H();
        }
        P0=0xFF;
        delay(500);

        for(unsigned char i=0;i<250;i++)
        {
            letter_R();
        }
        P0=0xFF;
        delay(500);

        for(unsigned char i=0;i<250;i++)
        {
            letter_E();
        }
        P0=0xFF;
        delay(500);

        for(unsigned char i=0;i<250;i++)
        {
            letter_A();
        }
        P0=0xFF;
        delay(500);

        for(unsigned char i=0;i<250;i++)
        {
            letter_Y();
        }
        P0=0xFF;
        delay(500);

        for(unsigned char i=0;i<250;i++)
        {
            letter_P();
        }
        P0=0xFF;
        delay(500);

        for(unsigned char i=0;i<250;i++)
        {
            letter_W();
        }
        P0=0xFF;
        delay(500);

        for(unsigned char i=0;i<250;i++)
        {
            letter_N();
        }
        P0=0xFF;
        delay(500);*/
    }
}