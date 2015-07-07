
#include "board.h"
#include "config.h"
#include "communication.h"


void APP_init(void);
void APP_task(void);

UINT8 APP_comCallBack( far UINT8 *rxPacket,  far UINT8* txCode, far UINT8** txPacket);
