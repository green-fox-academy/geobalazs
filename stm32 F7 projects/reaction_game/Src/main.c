/**
 ******************************************************************************
 * @file    Templates/Src/main.c
 * @author  MCD Application Team
 * @version V1.0.3
 * @date    22-April-2016
 * @brief   STM32F7xx HAL API Template project
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
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

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <string.h>

/** @addtogroup STM32F7xx_HAL_Examples
 * @{
 */

/** @addtogroup Templates
 * @{
 */
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef uart_handle;

/* Private function prototypes -----------------------------------------------*/

#ifdef __GNUC__
/* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
 set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);

/* Private functions ---------------------------------------------------------*/

/**
 * @brief  Main program
 * @param  None
 * @retval None
 */

/*GEOKB GREEN PANEL LED handling functions*/

void led_initialize(){
// **** initialize LED A15 -> STMBOARD A0 PIN **** //
	__HAL_RCC_GPIOA_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

	GPIO_InitTypeDef LEDA0;            // create a config structure
	LEDA0.Pin = GPIO_PIN_0;            // this is about PIN 1
	LEDA0.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
	LEDA0.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	LEDA0.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOA, &LEDA0);      // initialize the pin on GPIO* port with HAL
}

void led_blinking(){
  GPIOA->ODR = GPIOA->ODR | 0b00000000000000000000000000000001; // set the lowest bit to 1, leave the others as they are (this will set the lowest bit - PIN 0 - to 1)
  HAL_Delay(200);                      // wait a second
  GPIOA->ODR = GPIOA->ODR & 0b11111111111111111111111111111110; // this will set the lowest bit (PIN 0) to 0. Guess why!
  HAL_Delay(200);                      // wait a second
}
void led_on(){
	GPIOA->ODR = GPIOA->ODR | 0b00000000000000000000000000000001;
}
void led_off(){
	GPIOA->ODR = GPIOA->ODR & 0b11111111111111111111111111111110;
}
/*:-) :-) :-) :-) :-) BUTTON HANDLING :-) :-) :-) :-) :-)*/

void button_initialize_A24(){
// **** initialize BUTTON A24 -> STMBOARD A1 PIN **** //
		__HAL_RCC_GPIOF_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

		GPIO_InitTypeDef BUTTONA24;            // create a config structure
		BUTTONA24.Pin = GPIO_PIN_10;            // this is about PIN 10
		BUTTONA24.Mode = GPIO_MODE_INPUT;  // Configure as output with push-up-down enabled
		BUTTONA24.Pull = GPIO_PULLUP;        // the push-up-down should work as pulldown
		BUTTONA24.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

		HAL_GPIO_Init(GPIOF, &BUTTONA24);      // initialize the pin on GPIO* port with HAL
}

void button_initialize_A4(){
// **** initialize BUTTON A4 -> STMBOARD A2 PIN **** //
		__HAL_RCC_GPIOF_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

		GPIO_InitTypeDef BUTTONA4;            // create a config structure
		BUTTONA4.Pin = GPIO_PIN_9;            // this is about PIN 10
		BUTTONA4.Mode = GPIO_MODE_INPUT;  // Configure as output with push-up-down enabled
		BUTTONA4.Pull = GPIO_PULLUP;        // the push-up-down should work as pulldown
		BUTTONA4.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

		HAL_GPIO_Init(GPIOF, &BUTTONA4);      // initialize the pin on GPIO* port with HAL
}


/* RANDOM NUM \m/ \m/ \m/ \m/ \m/ \m/ \m/ \m/*/
RNG_HandleTypeDef RAND_CONFIG;

int my_random_num_func() {
	return HAL_RNG_GetRandomNumber(&RAND_CONFIG) % 10000 + 1;
}

/*MY DELAY :L :L :L :L :L :L :L :L :L :L :L :L :L :L :L*/
/*void MY_Delay(uint32_t wait_ms){
	for(unsigned int i = wait_ms ; i > 0; i--){
		HAL_Delay(1);
		if (BSP_PB_GetState(BUTTON_KEY) == SET){ //port check
			break;
		}
	}
}*/

/*VVVVVVVVVV HERE IS THE FCKN MAIN VVVVVVVVVVVVVVVV*//*VVVVVVVVVV HERE IS THE FCKN MAIN VVVVVVVVVVVVVVVV*/
/*VVVVVVVVVV HERE IS THE FCKN MAIN VVVVVVVVVVVVVVVV*//*VVVVVVVVVV HERE IS THE FCKN MAIN VVVVVVVVVVVVVVVV*/

int main(void) {
	/* This project template calls firstly two functions in order to configure MPU feature
	 and to enable the CPU Cache, respectively MPU_Config() and CPU_CACHE_Enable().
	 These functions are provided as template implementation that User may integrate
	 in his application, to enhance the performance in case of use of AXI interface
	 with several masters. */

	/* Configure the MPU attributes as Write Through */
	MPU_Config();

	/* Enable the CPU Cache */
	CPU_CACHE_Enable();

	/* STM32F7xx HAL library initialization:
	 - Configure the Flash ART accelerator on ITCM interface
	 - Configure the Systick to generate an interrupt each 1 msec
	 - Set NVIC Group Priority to 4
	 - Low Level Initialization
	 */
	HAL_Init();

	/* Configure the System clock to have a frequency of 216 MHz */
	SystemClock_Config();

	/* Application code here >) >) >) >) >) >) >) >) >)  */

	/* RANDOM NUM \m/ \m/ \m/ \m/ \m/ \m/ \m/ \m/*/
	RAND_CONFIG.Instance = RNG;
	HAL_RNG_Init(&RAND_CONFIG);

	/* BOARD LED and BUTTON INITIALIZE */
	//BSP_LED_Init(LED_GREEN);
	//BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	/* UART INITIALIZE */
	uart_handle.Init.BaudRate = 115200;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
	uart_handle.Init.StopBits = UART_STOPBITS_1;
	uart_handle.Init.Parity = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode = UART_MODE_TX_RX;

	BSP_COM_Init(COM1, &uart_handle);

	/* Output a message using printf function */
	printf("\n------------------WELCOME------------------\n");
	printf("**********in STATIC reaction game**********\n");
	printf("\t \t \(^ \(^ \(^ GEOBALAZS program for Katti \(^ \(^ \(^ \n");
	printf("************ Hy my lovely Katti, let's play ************ \n");
	//printf("%u \n", my_random_num_func());

	/*REACTION GAME FLOW*/

	button_initialize_A24();
	button_initialize_A4();
	led_initialize();
	uint32_t tickstart = HAL_GetTick();
	uint32_t reaction_time = 0;
	uint8_t player_one = 0;
	uint8_t player_two = 0;

	while(HAL_GetTick() - tickstart <= 2500){
		led_blinking();
	}

	//HAL_Delay(my_random_num_func());
	HAL_Delay(1500);
	led_on();
	tickstart = HAL_GetTick();

		//if(HAL_GPIO_ReadPin(GPIOF, GPIO_PIN_9) == 1){
		//	reaction_time = HAL_GetTick() - tickstart;
		//	led_off();
		//	++player_one;}
		/*
		else if (HAL_GPIO_ReadPin(GPIOF, GPIO_PIN_9) == 0){
			reaction_time = HAL_GetTick() - tickstart;
			led_off();
			++player_two;
		}
		*/
	//printf("Reaction time: %u ms.\n" , reaction_time);
	//printf("Player 1: %u" , player_one);
	//printf("Player 2: %u" , player_two);

	/*
	while(1){
		if (HAL_GPIO_ReadPin(GPIOF, GPIO_PIN_9) == 0){
			led_on();
			printf("h");
		}
		if (HAL_GPIO_ReadPin(GPIOF, GPIO_PIN_10) == 0){
			led_off();
			printf("l");
		}
	}
	*/
	/* ONE PLAYER ON STMBOARD <|:-[]> <|:-[]> <|:-[]> <|:-[]> <|:-[]>
	int state = 0; // wait for user
	uint32_t tickstart = 0;
	uint32_t reaction_time = 0;
	uint32_t sum_reaction_time = 0;
	uint8_t round = 0;

	while (1) {
		round += 1;

		while (state == 0 && BSP_PB_GetState(BUTTON_KEY) != SET) {
			BSP_LED_Toggle(LED_GREEN);
			//HAL_Delay(500);
			MY_Delay(500);
		}
		while ( BSP_PB_GetState(BUTTON_KEY)){
			//printf("Do not push the button continuously\n");
		}
		//printf("******* The Game has been started, watch the LED! ********");
		BSP_LED_Off(LED_GREEN);
		state = 1;
		if (state == 1) {
			HAL_Delay(my_random_num_func());
			BSP_LED_On(LED_GREEN);
			tickstart = HAL_GetTick();
		}
		state = 2;

		while (state == 2 && BSP_PB_GetState(BUTTON_KEY) != SET) {
		}
		reaction_time = HAL_GetTick() - tickstart;
		sum_reaction_time += reaction_time;
		printf("Round: %u , Reaction time: %u ms \n" , round , reaction_time );
		HAL_Delay(1000);
		state = 0;
		if (round % 5 == 0){
			printf("Your average reaction time: %u ms \n" , sum_reaction_time / round);
		}
	}*/
}
/*^^^^^^^^^^^^^^^^^^^^^^^^ HERE IS THE END OF THE FCKN MAIN ^^^^^^^^^^^^^^^^^^^^^^^^*/
/*^^^^^^^^^^^^^^^^^^^^^^^^ HERE IS THE END OF THE FCKN MAIN ^^^^^^^^^^^^^^^^^^^^^^^^*/
/**
 * @brief  Retargets the C library printf function to the USART.
 * @param  None
 * @retval None
 */
PUTCHAR_PROTOTYPE {
	/* Place your implementation of fputc here */
	/* e.g. write a character to the EVAL_COM1 and Loop until the end of transmission */
	HAL_UART_Transmit(&uart_handle, (uint8_t *) &ch, 1, 0xFFFF);

	return ch;
}

/**
 * @brief  System Clock Configuration
 *         The system Clock is configured as follow :
 *            System Clock source            = PLL (HSE)
 *            SYSCLK(Hz)                     = 216000000
 *            HCLK(Hz)                       = 216000000
 *            AHB Prescaler                  = 1
 *            APB1 Prescaler                 = 4
 *            APB2 Prescaler                 = 2
 *            HSE Frequency(Hz)              = 25000000
 *            PLL_M                          = 25
 *            PLL_N                          = 432
 *            PLL_P                          = 2
 *            PLL_Q                          = 9
 *            VDD(V)                         = 3.3
 *            Main regulator output voltage  = Scale1 mode
 *            Flash Latency(WS)              = 7
 * @param  None
 * @retval None
 */
static void SystemClock_Config(void) {
	RCC_ClkInitTypeDef RCC_ClkInitStruct;
	RCC_OscInitTypeDef RCC_OscInitStruct;

	/* Enable HSE Oscillator and activate PLL with HSE as source */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
	RCC_OscInitStruct.HSEState = RCC_HSE_ON;
	RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
	RCC_OscInitStruct.PLL.PLLM = 25;
	RCC_OscInitStruct.PLL.PLLN = 432;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 9;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/* activate the OverDrive to reach the 216 Mhz Frequency */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
	 clocks dividers */
	RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}

/**
 * @brief  This function is executed in case of error occurrence.
 * @param  None
 * @retval None
 */
static void Error_Handler(void) {
	/* User may add here some code to deal with this error */
	while (1) {
	}
}

/**
 * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
 * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
 *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
 * @param  None
 * @retval None
 */
static void MPU_Config(void) {
	MPU_Region_InitTypeDef MPU_InitStruct;

	/* Disable the MPU */
	HAL_MPU_Disable();

	/* Configure the MPU attributes as WT for SRAM */
	MPU_InitStruct.Enable = MPU_REGION_ENABLE;
	MPU_InitStruct.BaseAddress = 0x20010000;
	MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
	MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
	MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
	MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
	MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
	MPU_InitStruct.Number = MPU_REGION_NUMBER0;
	MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
	MPU_InitStruct.SubRegionDisable = 0x00;
	MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

	HAL_MPU_ConfigRegion(&MPU_InitStruct);

	/* Enable the MPU */
	HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
}

/**
 * @brief  CPU L1-Cache enable.
 * @param  None
 * @retval None
 */
static void CPU_CACHE_Enable(void) {
	/* Enable I-Cache */
	SCB_EnableICache();

	/* Enable D-Cache */
	SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t* file, uint32_t line)
{
	/* User can add his own implementation to report the file name and line number,
	 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while (1)
	{
	}
}
#endif

/**
 * @}
 */

/**
 * @}
 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
