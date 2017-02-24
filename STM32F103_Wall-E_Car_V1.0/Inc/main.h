/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */
#include <stdint.h>
extern uint8_t Heart_Flag;
/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define M1_PWM_Pin GPIO_PIN_0
#define M1_PWM_GPIO_Port GPIOA
#define M2_PWM_Pin GPIO_PIN_1
#define M2_PWM_GPIO_Port GPIOA
#define ULT_TX_Pin GPIO_PIN_2
#define ULT_TX_GPIO_Port GPIOA
#define ULT_RX_Pin GPIO_PIN_3
#define ULT_RX_GPIO_Port GPIOA
#define OLED_DC_Pin GPIO_PIN_4
#define OLED_DC_GPIO_Port GPIOC
#define M1_DIR_Pin GPIO_PIN_0
#define M1_DIR_GPIO_Port GPIOB
#define M2_DIR_Pin GPIO_PIN_1
#define M2_DIR_GPIO_Port GPIOB
#define OLED_CS_Pin GPIO_PIN_12
#define OLED_CS_GPIO_Port GPIOB
#define OLED_D0_SCK_Pin GPIO_PIN_13
#define OLED_D0_SCK_GPIO_Port GPIOB
#define OLED_RES_Pin GPIO_PIN_14
#define OLED_RES_GPIO_Port GPIOB
#define OLED_D1_MOSI_Pin GPIO_PIN_15
#define OLED_D1_MOSI_GPIO_Port GPIOB
#define RUD1_PWM_Pin GPIO_PIN_6
#define RUD1_PWM_GPIO_Port GPIOC
#define RUD2_PWM_Pin GPIO_PIN_7
#define RUD2_PWM_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_12
#define LED1_GPIO_Port GPIOA
#define M1_ENC_A_Pin GPIO_PIN_4
#define M1_ENC_A_GPIO_Port GPIOB
#define M1_ENC_2_Pin GPIO_PIN_5
#define M1_ENC_2_GPIO_Port GPIOB
#define M2_ENC_A_Pin GPIO_PIN_6
#define M2_ENC_A_GPIO_Port GPIOB
#define M2_ENC_B_Pin GPIO_PIN_7
#define M2_ENC_B_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
