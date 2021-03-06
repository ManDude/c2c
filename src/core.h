#ifndef H_CORE_H
#define H_CORE_H

#include "common.h"
#include "emu.h"

#ifdef __cplusplus
extern "C" {
#endif

extern int CORE_Main(void);
extern void CORE_Loop(uint32_t levelid);
extern void CORE_Start(void);
extern void CORE_VSync(int32_t count,int32_t timeout);

#ifdef __cplusplus
}
#endif

#endif
