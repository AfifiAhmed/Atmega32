/****************************************/
/*          Author: Ahmed Afifi         */        
/*          Date: 28-05-2022            */
/*          Version: 1.0                */
/*          Module: Interrupt           */
/****************************************/

//GIE - General Interrupt Enable
#include "STD_types.h"
#include "BIT_MATH.h"
#include "GIE_int.h"
#include "GIE_private.h"
#include "GIE_config.h"

void GIE_voidEnable(void)
{
	SET_BIT(SREG , 7);
}
void GIE_voidDisable(void)
{
	CLEAR_BIT(SREG , 7);
}