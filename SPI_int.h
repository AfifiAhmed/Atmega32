/****************************************/
/*          Author: Ahmed Afifi         */        
/*          Date: 5-5-2022              */
/*          Version: 1.0                */
/*          Module: SPI                 */
/****************************************/

void SPI_voidInit(void);
void SPI_voidEnable(void);
void SPI_voidDisable(void);
u8 SPI_u8DataTransfere(u8 Local_u8Data);

void SPI_u8SendData(u8 Local_u8Data);
u8 SPI_u8ReceiveData(void);