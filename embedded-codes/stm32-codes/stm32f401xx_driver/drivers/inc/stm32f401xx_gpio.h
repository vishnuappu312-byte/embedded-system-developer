/*
 * stm32f401xx_gpio.h
 *
 *  Created on: 18-Jul-2026
 *      Author: vishnu
 */

#ifndef INC_STM32F401XX_GPIO_H_
#define INC_STM32F401XX_GPIO_H_

#include "stm32f401xx.h"
#include <stdint.h>


typedef struct
{
	uint32_t GPIO_PinNumber;
	uint32_t GPIO_PinMode;
	uint32_t GPIO_PinSpeed;
	uint32_t GPIO_PinPuPdControl;
	uint32_t GPIO_PinOPType;
	uint32_t GPIO_PinAltFunMode;


}GPIO_PinConfig_t;

typedef struct
{

	GPIO_RegDef_t *pGPIOx;
	GPIO_PinConfig_t GPIO_PinConfig;
}GPIO_Handle_t;



#define GPIO_PORT_A        					0
#define GPIO_PORT_B        					1
#define GPIO_PORT_C        					2
#define GPIO_PORT_D        					3
#define GPIO_PORT_E        					4
#define GPIO_PORT_H        					5

#define GPIO_PIN_NO_0						0
#define GPIO_PIN_NO_1						1
#define GPIO_PIN_NO_2						2
#define GPIO_PIN_NO_3						3
#define GPIO_PIN_NO_4						4
#define GPIO_PIN_NO_5						5
#define GPIO_PIN_NO_6						6
#define GPIO_PIN_NO_7						7
#define GPIO_PIN_NO_8						8
#define GPIO_PIN_NO_9						9
#define GPIO_PIN_NO_10						10
#define GPIO_PIN_NO_11						11
#define GPIO_PIN_NO_12						12
#define GPIO_PIN_NO_13						13
#define GPIO_PIN_NO_14						14
#define GPIO_PIN_NO_15						15



#define GPIO_MODE_IN						0
#define GPIO_MODE_OUT						1
#define GPIO_MODE_ALTFN						2
#define GPIO_MODE_ANALOG					3

#define GPIO_MODE_IT_FT         			4
#define GPIO_MODE_IT_RT         			5
#define GPIO_MODE_IT_RFT        			6





#define GPIO_SPEED_LOW						0
#define GPIO_SPEED_MEDIUM					1
#define GPIO_SPEED_FAST						2
#define GPIO_SPEED_HIGH					    3


#define GPIO_OP_TYPE_PP						0
#define GPIO_OP_TYPE_OD					    1

#define GPIO_NO_PUPD						0
#define GPIO_NO_PU					        1
#define GPIO_NO_PD					        2

#define GPIO_AF0            				0
#define GPIO_AF1            				1
#define GPIO_AF2           					2
#define GPIO_AF3            				3
#define GPIO_AF4            				4
#define GPIO_AF5            				5
#define GPIO_AF6            				6
#define GPIO_AF7            				7
#define GPIO_AF8            				8
#define GPIO_AF9            				9
#define GPIO_AF10           				10
#define GPIO_AF11           				11
#define GPIO_AF12           				12
#define GPIO_AF13           				13
#define GPIO_AF14           				14
#define GPIO_AF15           				15



#define ENABLE             					1
#define DISABLE            					0
#define RESET     							DISABLE
#define SET       							ENABLE
#define GPIO_PIN_SET						SET
#define GPIO_PIN_RESET  					0
#define GPIO_LOW           					0
#define GPIO_HIGH          					1




/* Peripheral Clock */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx,uint8_t EnOrDi);
/* GPIO Configuration */
void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx);
/* GPIO Write */
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx,uint8_t PinNumber , uint8_t Value);
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value);
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx,uint16_t PinNumber);
/* GPIO Read */
uint16_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx , uint8_t PinNumber);
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx);

/* GPIO Interrupt */
void GPIO_SetOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
void GPIO_ResetOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
void GPIO_LockPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);

/* Optional Utility */

void GPIO_IRQInterruptConfig(uint8_t IRQNumber, uint8_t EnOrDi);
void GPIO_IRQPriorityConfig(uint8_t IRQNumber, uint8_t IRQPriority);
void GPIO_IRQHandling(uint8_t PinNumber);






#endif /* INC_STM32F401XX_GPIO_H_ */
