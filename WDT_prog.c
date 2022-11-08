/****************************************/
/*          Author: Ahmed Afifi         */        
/*          Date: 06-06-2022            */
/*          Version: 1.0                */
/*          Module: WDT                 */
/****************************************/

#include "STD_types.h"
#include "BIT_math.h"
#include "WDT_int.h"
#include "WDT_private.h"
#include "WDT_config.h"

void WDT_voidActivate(u8 Copy_u8Timeout)
{
	if(Copy_u8Timeout == WDT_U8_16_3_ms)
	{
		CLEAR_BIT(WDTCR,0);
		CLEAR_BIT(WDTCR,1);
		CLEAR_BIT(WDTCR,2);
	}
	
	
	SET_BIT(WDTCR,3); //enable
}
void WDT_voidDeActivate(void)
{
	/* Write logical one to WDTOE and WDE */
	WDTCR = (1<<4) | (1<<3);
	/* Turn off WDT */
	WDTCR = 0x00;
}