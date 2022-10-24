/****************************************/
/*          Author: Ahmed Afifi         */        
/*          Date: 15-4-2022             */
/*          Version: 1.0                */
/*          Module: SEGMENT 7           */
/****************************************/

#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "SEG_int.h"
#include "SEG_private.h"
#include "SEG_config.h"

void SEG_voidEnSeg_1(void)
{
	DIO_voidSetPinValue(DIO_U8_PIN9 ,DIO_U8_HIGH);
}
void SEG_voidEnSeg_2(void)
{
	DIO_voidSetPinValue(DIO_U8_PIN10,DIO_U8_HIGH);
}
void SEG_voidDisplay(u8 Copy_u8Count)
{
	switch (Copy_u8Count)
	case  SEG_U8_0: 
	DIO_voidSetPinValue(SEG_U8_A,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_B,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_C,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_D,SEG_U8_LOW);
	break;
	case  SEG_U8_1: 
	DIO_voidSetPinValue(SEG_U8_A,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_B,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_C,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_D,SEG_U8_LOW);
	break;
	case  SEG_U8_2: 
	DIO_voidSetPinValue(SEG_U8_A,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_B,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_C,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_D,SEG_U8_LOW);
	break;
	case  SEG_U8_3: 
	DIO_voidSetPinValue(SEG_U8_A,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_B,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_C,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_D,SEG_U8_LOW);
	break;
	case  SEG_U8_4: 
	DIO_voidSetPinValue(SEG_U8_A,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_B,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_C,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_D,SEG_U8_LOW);
	break;
	case  SEG_U8_5: 
	DIO_voidSetPinValue(SEG_U8_A,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_B,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_C,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_D,SEG_U8_LOW);
	break;
	case  SEG_U8_6: 
	DIO_voidSetPinValue(SEG_U8_A,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_B,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_C,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_D,SEG_U8_LOW);
	break;
	case  SEG_U8_7: 
	DIO_voidSetPinValue(SEG_U8_A,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_B,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_C,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_D,SEG_U8_LOW);
	break;
	case  SEG_U8_8: 
	DIO_voidSetPinValue(SEG_U8_A,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_B,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_C,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_D,SEG_U8_HIGH);
	break;
	case  SEG_U8_9: 
	DIO_voidSetPinValue(SEG_U8_A,SEG_U8_HIGH);
	DIO_voidSetPinValue(SEG_U8_B,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_C,SEG_U8_LOW);
	DIO_voidSetPinValue(SEG_U8_D,SEG_U8_HIGH);
	break;
}