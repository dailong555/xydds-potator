#ifndef __CONTROLS_H__
#define __CONTROLS_H__

#include "supervision.h"

void controls_reset();
uint8 controls_read(uint32 addr);
BOOL controls_update(void);
void controls_state_write(uint8 type, uint8 data);

#endif
