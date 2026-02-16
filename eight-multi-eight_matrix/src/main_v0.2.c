#include<8052.h>

#define SER   P3_4
#define RCLK  P3_5
#define SRCLK P3_6

unsigned char dl=2;//scan speed

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
        SER=data & 0x1;
        data>>=1;//right move
        SRCLK=1;
    }
    RCLK=0;
    RCLK=1;
}

void col_ctrl()
{
    unsigned char begin=0xFE;
    P0=begin;
    delay(dl);
    P0=0xFF;
}


void letter_H(void)
{
    unsigned char data[]={0xFF,0x18};

    row_ctrl(data[0]);
    P0_0=0;
    delay(dl);
    P0_0=1;
    P0_1=0;
    delay(dl);
    P0_1=1;
    
    row_ctrl(data[1]);
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

    row_ctrl(data[0]);
    P0_6=0;
    delay(dl);
    P0_6=1;
    P0_7=0;
    delay(dl);
    P0_7=1;
}

void letter_A(void)
{
    unsigned char data[]={0xF8,0xFC,0x66,0x63};

    row_ctrl(data[0]);
    P0_0=0;
    delay(dl);
    P0_0=1;
    
    row_ctrl(data[1]);
    P0_1=0;
    delay(dl);
    P0_1=1;

    row_ctrl(data[2]);
    P0_2=0;
    delay(dl);
    P0_2=1;

    row_ctrl(data[3]);
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;

    row_ctrl(data[2]);
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data[1]);
    P0_6=0;
    delay(dl);
    P0_6=1;

    row_ctrl(data[0]);
    P0_7=0;
    delay(dl);
    P0_7=1;

}

void letter_P(void)
{
    unsigned char data[]={0xC,0x1E,0x3F,0x33,0xFF};

    row_ctrl(data[0]);
    P0_0=0;
    delay(dl);
    P0_0=1;

    row_ctrl(data[1]);
    P0_1=0;
    delay(dl);
    P0_1=1;

    row_ctrl(data[2]);
    P0_2=0;
    delay(dl);
    P0_2=1;

    row_ctrl(data[3]);
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data[4]);
    P0_6=0;
    delay(dl);
    P0_6=1;
    P0_7=0;
    delay(dl);
    P0_7=1;
}

void letter_Y(void)
{
    unsigned char data[]={0xF,0x1F,0x18,0xF0};

    row_ctrl(data[0]);
    P0_0=0;
    delay(dl);
    P0_0=1;

    row_ctrl(data[1]);
    P0_1=0;
    delay(dl);
    P0_1=1;

    row_ctrl(data[2]);
    P0_2=0;
    delay(dl);
    P0_2=1;

    row_ctrl(data[3]);
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;

    row_ctrl(data[2]);
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data[1]);
    P0_6=0;
    delay(dl);
    P0_6=1;

    row_ctrl(data[0]);
    P0_7=0;
    delay(dl);
    P0_7=1;
}

void letter_N(void)
{
    unsigned char data[]={0xFF,0xF0,0x38,0x1C,0xF};

    row_ctrl(data[0]);
    P0_0=0;
    delay(dl);
    P0_0=1;
    P0_1=0;
    delay(dl);
    P0_1=1;

    row_ctrl(data[1]);
    P0_2=0;
    delay(dl);
    P0_2=1;

    row_ctrl(data[2]);
    P0_3=0;
    delay(dl);
    P0_3=1;

    row_ctrl(data[3]);
    P0_4=0;
    delay(dl);
    P0_4=1;

    row_ctrl(data[4]);
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data[0]);
    P0_6=0;
    delay(dl);
    P0_6=1;
    P0_7=0;
    delay(dl);
    P0_7=1;

}

void letter_E(void)
{
    unsigned char data[]={0xDB,0xFF};

    row_ctrl(data[0]);
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

    row_ctrl(data[1]);
    P0_6=0;
    delay(dl);
    P0_6=1;
    P0_7=0;
    delay(dl);
    P0_7=1;
}

void letter_W(void)

{
    unsigned char data[]={0x3F,0xFF,0xF0,0x3E};
    
    row_ctrl(data[0]);
    P0_0=0;
    delay(dl);
    P0_0=1;

    row_ctrl(data[1]);
    P0_1=0;
    delay(dl);
    P0_1=1;

    row_ctrl(data[2]);
    P0_2=0;
    delay(dl);
    P0_2=1;

    row_ctrl(data[3]);
    P0_3=0;
    delay(dl);
    P0_3=1;
    P0_4=0;
    delay(dl);
    P0_4=1;

    row_ctrl(data[2]);
    P0_5=0;
    delay(dl);
    P0_5=1;

    row_ctrl(data[1]);
    P0_6=0;
    delay(dl);
    P0_6=1;

    row_ctrl(data[0]);
    P0_7=0;
    delay(dl);
    P0_7=1;

}

void letter_R(void)
{
    unsigned char data[]={0xC,0xDE,0xF3,0x73,0x33,0x13,0xFF};

    row_ctrl(data[0]);
    P0_0=0;
    delay(dl);
    P0_0=1;

    row_ctrl(data[1]);
    P0_1=0;
    delay(dl);
    P0_1=1;
    
    row_ctrl(data[2]);
    P0_2=0;
    delay(dl);
    P0_2=1;
    
    row_ctrl(data[3]);
    P0_3=0;
    delay(dl);
    P0_3=1;
    
    row_ctrl(data[4]);
    P0_4=0;
    delay(dl);
    P0_4=1;
    
    row_ctrl(data[5]);
    P0_5=0;
    delay(dl);
    P0_5=1;
    
    row_ctrl(data[6]);
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
        //letter_P();
        //letter_Y();
        //letter_N();
        //letter_W();
        //letter_Y();
        //letter_E();
        //letter_A();
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