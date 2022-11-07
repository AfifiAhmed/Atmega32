/****************************************/
/*          Author: Ahmed Afifi         */        
/*          Date: 01-06-2022            */
/*          Version: 1.0                */
/*          Module: USART               */
/****************************************/

#define  F_CPU 16000000UL
#include <util/delay.h>
#include "STD_types.h"
#include "UART_int.h"


// Send code

int main ()
{
 UART_voidInit();
 u8 Recieve;

 while(1)
 {
	/* Recieve = UART_u8ReceiveByte();
	switch(Recieve)
	{
	case '8':
		UART_voidSendByte('E');
		break;

	case 'c':
		UART_voidSendByte('2');
		break;
	default:
		UART_voidSendByte('n');
		break;
	}*/
	
	 UART_voidSendByte('A');
	 UART_voidSendByte('h');
	 UART_voidSendByte('m');
	 UART_voidSendByte('e');
	 UART_voidSendByte('d');
	 UART_voidSendByte(' ');
	 _delay_ms(1000);
 }

}


