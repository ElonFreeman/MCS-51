/**
 * CPU: 89C52
 * Freq: 12MHz
*/

#include<8052.h>

void delay(unsigned char dl)
{
    for(unsigned char i=0;i<dl;i++)
    {

    }
}

row_ctrl(unsigned char row_data)
{
    for(unsigned char i=0;;i++)
    {
        SRCLK=0;
        SER=data & 0x1;
        data>>=1;//right move
        SRCLK=1;
    }
    RCLK=0;
    RCLK=1;
}

void main(void)
{

}
