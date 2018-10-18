/**
 * @file   	%<%NAME%>%.%<%EXTENSION%>%
 * @author 	%<%USER%>%
 * @version
 * @date 	%<%DATE%>%, %<%TIME%>%
 * @brief
 */


/*#### |Begin| --> Секция - "Include" ########################################*/
#include "SR04_ultrasonic_sensor.h"
/*#### |End  | <-- Секция - "Include" ########################################*/


/*#### |Begin| --> Секция - "Глобальные переменные" ##########################*/
/*#### |End  | <-- Секция - "Глобальные переменные" ##########################*/


/*#### |Begin| --> Секция - "Локальные переменные" ###########################*/
/*#### |End  | <-- Секция - "Локальные переменные" ###########################*/


/*#### |Begin| --> Секция - "Прототипы локальных функций" ####################*/
/*#### |End  | <-- Секция - "Прототипы локальных функций" ####################*/


/*#### |Begin| --> Секция - "Описание глобальных функций" ####################*/
void SR04_sonar_init()
{
	/* Настройка тригера (Trig), который запустит датчик */

	LL_GPIO_InitTypeDef GpioTrigCnfg_s;
	LL_GPIO_StructInit(&GpioTrigCnfg_s);

	GpioTrigCnfg_s.Pin = LL_GPIO_PIN_1;
	GpioTrigCnfg_s.Mode = LL_GPIO_MODE_OUTPUT;

	LL_GPIO_Init(GPIOB, &GpioTrigCnfg_s);

	/* Настраиваем пин 0 как вход (получит данные с Echo) */

	LL_GPIO_InitTypeDef GpioEchoCnfg_s;
	LL_GPIO_StructInit(&GpioEchoCnfg_s);

	GpioEchoCnfg_s.Pin = LL_GPIO_PIN_0;
	GpioEchoCnfg_s.Mode = LL_GPIO_MODE_INPUT;
	GpioEchoCnfg_s.Speed = LL_GPIO_MODE_OUTPUT_2MHz;

	LL_GPIO_Init(GPIOB, &GpioEchoCnfg_s);

	/* Конфигурация контроллера внешнего прерывания */
	LL_EXTI_InitTypeDef ExtiInit_s;
	LL_EXTI_StructInit(&ExtiInit_s);

	/* Задействуем линию 0 */
	ExtiInit_s.Line_0_31 = LL_EXTI_LINE_0;
	/* Разрешаем прерывание */
	ExtiInit_s.LineCommand = ENABLE;
	/* Настраиваем работу линии в режиме прерывания */
	ExtiInit_s.Mode = LL_EXTI_MODE_IT;
	ExtiInit_s.Trigger = LL_EXTI_TRIGGER_RISING_FALLING;

	LL_EXTI_Init(&ExtiInit_s);


	NVIC_SetPriority(EXTI0_IRQn, 1);
	NVIC_EnableIRQ(EXTI0_IRQn);

}

void EXTI0_IRQHandler(void)
{
	int a = 4;
	a += 1;
	return;
}
/*#### |End  | <-- Секция - "Описание глобальных функций" ####################*/


/*#### |Begin| --> Секция - "Описание локальных функций" #####################*/
/*#### |End  | <-- Секция - "Описание локальных функций" #####################*/


/*############################################################################*/
/*############################ END OF FILE  ##################################*/
/*############################################################################*/
