/**
 * @file   	UFD_uart_for_debug.c
 * @author 	m.isaev
 * @version
 * @date 	18 сент. 2018 г.
 * @brief
 */


/*#### |Begin| --> Секция - "Include" ########################################*/
#include "UFD_uart_for_debug.h"
/*#### |End  | <-- Секция - "Include" ########################################*/


/*#### |Begin| --> Секция - "Глобальные переменные" ##########################*/
/*#### |End  | <-- Секция - "Глобальные переменные" ##########################*/


/*#### |Begin| --> Секция - "Локальные переменные" ###########################*/
/*#### |End  | <-- Секция - "Локальные переменные" ###########################*/


/*#### |Begin| --> Секция - "Прототипы локальных функций" ####################*/
static void
UFD_Init_IO_Ports(
	void);

static void
UFD_Init_DMA1_Channel7_For_USART2_Tx(
	void);

static void
UFD_Init_USART2_TxRx(
	uint32_t baudrate);
/*#### |End  | <-- Секция - "Прототипы локальных функций" ####################*/


/*#### |Begin| --> Секция - "Описание глобальных функций" ####################*/

void
UFD_Init_All_USART2_TxRx_DMA1_Channel7_IO_Ports(
	uint32_t baudrate)
{
	/* Инициализация портов ввода/вывода */
	UFD_Init_IO_Ports();

	/* Инициализация канала DMA1_Channel7 для UART2_Tx */
	UFD_Init_DMA1_Channel7_For_USART2_Tx();

	/* Инициализация модуля UART2 */
	UFD_Init_USART2_TxRx(
		baudrate);
}

void
UFD_StartForceDMATransmit(
	uint32_t *pMemSource,
	uint16_t cnt)
{
	/* TODO - UFD написать форсированный запуск передачи по каналу DMA */
}

void
UFD_StartDMATransmit(
	uint32_t *pMemSource,
	uint16_t cnt)
{
	/* TODO - UFD написать запуск передачи по каналу DMA если канал DMA неактивен */
}

static void
UFD_Init_IO_Ports(
	void)
{
	LL_GPIO_InitTypeDef GPIO_init_s;
	GPIO_init_s.Mode 		= LL_GPIO_MODE_ALTERNATE;
	GPIO_init_s.OutputType 	= LL_GPIO_OUTPUT_PUSHPULL;
	GPIO_init_s.Pin 		= LL_GPIO_PIN_2 | LL_GPIO_PIN_3;
	GPIO_init_s.Pull 		= LL_GPIO_PULL_UP;
	GPIO_init_s.Speed 		= LL_GPIO_MODE_OUTPUT_50MHz;

	LL_GPIO_Init(
		GPIOA,
		&GPIO_init_s);

	/* TODO - UFD написать инициализацию портов ввода/вывода */
}

static void
UFD_Init_DMA1_Channel7_For_USART2_Tx(
	void)
{
	/* TODO - UFD написать инициализацию для DMA1_Channel7 */
}

static void
UFD_Init_USART2_TxRx(
	uint32_t baudrate)
{
	/* TODO - UFD написать инициализацию модуля USART2_TxRx */
}

void USART2_IRQHandler(
	void)
{
	/* TODO - UFD написать обработчик прерывания модуля USART2 */
}

void DMA1_Channel7_IRQHandler(
	void)
{
	/* TODO - UFD написать обработчик прерывания DMA1_Channel7 */
}
/*#### |End  | <-- Секция - "Описание глобальных функций" ####################*/


/*#### |Begin| --> Секция - "Описание локальных функций" #####################*/
/*#### |End  | <-- Секция - "Описание локальных функций" #####################*/


/*############################################################################*/
/*############################ END OF FILE  ##################################*/
/*############################################################################*/
