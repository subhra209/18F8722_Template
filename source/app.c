#include "app.h"

void APP_init(void)
{
	UINT8 i;

#ifdef __BOARD_PIN_TESTING__

	for( i = 0; i < 8 ; i++)
	{
		LED1 = 0x01 << i ;
		DelayMs(400);
	}
	LED1 = 0;
	for( i = 0; i < 8 ; i++)
	{
		LED2 = 0x01 << i ;
		DelayMs(400);
	}
	LED2 = 0;
	for( i = 0; i < 8 ; i++)
	{
		LED3 = 0x01 << i ;
		DelayMs(400);
	}
	LED3 = 0;
	for( i = 0; i < 8 ; i++)
	{
		LED4 = 0x01 << i ;
		DelayMs(400);
	}
	LED4 = 0;
	for( i = 0; i < 8 ; i++)
	{
		LED5 = 0x01 << i ;
		DelayMs(400);
	}
	LED5 = 0;
	for( i = 0; i < 8 ; i++)
	{
		LED6 = 0x01 << i ;
		DelayMs(400);
	}
	LED6 = 0;
	for( i = 0; i < 8 ; i++)
	{
		LED7 = 0x01 << i ;
		DelayMs(400);
	}
	LED7 = 0;
	for( i = 0; i < 8 ; i++)
	{
		LED8 = 0x01 << i ;
		DelayMs(400);
	}
	LED8 = 0;

#endif

}

void APP_task( void )
{

}


UINT8 APP_comCallBack( far UINT8 *rxPacket, far UINT8* txCode,far UINT8** txPacket)
{

	UINT8 i;

	UINT8 rxCode = rxPacket[0];
	UINT8 length = 0;

	return length;

}