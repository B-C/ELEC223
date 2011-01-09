#include "uart_api.h"
#include "fibo.h"

char nibbleToAscii(unsigned char byte);

void intToHexa(unsigned long nb)
{
	short i;
	unsigned char byte;

	for(i=3 ; i>=0 ; i--)
	{
	  byte=nb>>(unsigned short)8*i;
	  nb-=byte<<(unsigned short)8*i;
	
		serial_putc(nibbleToAscii(byte>>4));
		serial_putc(nibbleToAscii(byte&0x0F));
	}
}

char nibbleToAscii(unsigned char byte)
{
	char digit;
	digit=byte+48;

	if(digit>57)
		digit+=7;
	
	return digit;
}
