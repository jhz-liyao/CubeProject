#ifndef __CHIP_TOOLS__
#define __CHIP_TOOLS__

#include "stm32f0xx_hal.h"
#include "FrameConfig.h" 

#define TRUE 1
#define FALSE 0
#define BSET(offset) (1 << offset)			//offsetλ��1����0
#define BRESET()		 (~(1 << offset))		//offsetλ��0����1


#define VECTOR_SIZE 48*4
#define FLASH_APP_ADDR		0x08001000  	//��һ��Ӧ�ó�����ʼ��ַ(�����FLASH)
#if MCU_TYPE == 030
	#define UID_ADDR 0x1FFFF7AC
#elif MCU_TYPE == 103
	#define UID_ADDR 0x1FFFF7E8
#endif


extern uint32_t UID[3];
extern uint32_t UID_M;
extern void ChipTools_Init(void);
extern void CheckEndian(void);
extern void SYSCFG_MemoryRemapConfig(uint32_t SYSCFG_MemoryRemap);
#endif