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
/* Private function prototypes -----------------------------------------------*/
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
/* >>  \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ << */
/*GEOKB LED RED*/

void led_initialize(){
// **** initialize LED A4 -> STMBOARD D0 PIN **** //
	__HAL_RCC_GPIOC_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

	GPIO_InitTypeDef LEDA4;            // create a config structure
	LEDA4.Pin = GPIO_PIN_7;            // this is about PIN 1
	LEDA4.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
	LEDA4.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	LEDA4.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOC, &LEDA4);      // initialize the pin on GPIO* port with HAL

// **** initialize LED A6 -> STMBOARD D1 PIN **** //
	__HAL_RCC_GPIOF_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

	GPIO_InitTypeDef LEDA6;            // create a config structure
	LEDA6.Pin = GPIO_PIN_6;            // this is about PIN 2
	LEDA6.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
	LEDA6.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	LEDA6.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOC, &LEDA6);      // initialize the pin on GPIO* port with HAL

// **** initialize LED A8 -> STMBOARD D2 PIN **** //
	__HAL_RCC_GPIOG_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

	GPIO_InitTypeDef LEDA8;            // create a config structure
	LEDA8.Pin = GPIO_PIN_6;            // this is about PIN 3
	LEDA8.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
	LEDA8.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	LEDA8.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOG, &LEDA8);      // initialize the pin on GPIO* port with HAL

// **** initialize LED A10 -> STMBOARD D3 PIN **** //
	__HAL_RCC_GPIOB_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

	GPIO_InitTypeDef LEDA10;            // create a config structure
	LEDA10.Pin = GPIO_PIN_4;            // this is about PIN 4
	LEDA10.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
	LEDA10.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	LEDA10.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOB, &LEDA10);      // initialize the pin on GPIO* port with HAL

// **** initialize LED A12 -> STMBOARD D4 PIN **** //
//	__HAL_RCC_GPIOF_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

	GPIO_InitTypeDef LEDA12;            // create a config structure
	LEDA12.Pin = GPIO_PIN_7;            // this is about PIN 5
	LEDA12.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
	LEDA12.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	LEDA12.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOG, &LEDA12);      // initialize the pin on GPIO* port with HAL

// **** initialize LED A14 -> STMBOARD A0 PIN **** //
	__HAL_RCC_GPIOI_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

	GPIO_InitTypeDef LEDA14;            // create a config structure
	LEDA14.Pin = GPIO_PIN_0;            // this is about PIN 6
	LEDA14.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
	LEDA14.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	LEDA14.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOI, &LEDA14);      // initialize the pin on GPIO* port with HAL

// **** initialize LED A16 -> STMBOARD D6 PIN **** //
	__HAL_RCC_GPIOH_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

	GPIO_InitTypeDef LEDA16;            // create a config structure
	LEDA16.Pin = GPIO_PIN_6;            // this is about PIN 7
	LEDA16.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
	LEDA16.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	LEDA16.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOH, &LEDA16);      // initialize the pin on GPIO* port with HAL

// **** initialize LED A18 -> STMBOARD D7 PIN **** //
//	__HAL_RCC_GPIOF_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

	GPIO_InitTypeDef LEDA18;            // create a config structure
	LEDA18.Pin = GPIO_PIN_3;            // this is about PIN 8
	LEDA18.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
	LEDA18.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	LEDA18.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOI, &LEDA18);      // initialize the pin on GPIO* port with HAL

}

/* @}-^-- @}-^-- @}-^-- @}-^-- **** BUTTON initialization @}-^-- @}-^-- @}-^-- @}-^-- @}-^--*/
void button_initialize(){
// **** initialize BUTTON A22 -> STMBOARD A0 PIN **** //
		__HAL_RCC_GPIOA_CLK_ENABLE();    // we need to enable the GPIO* port's clock first

		GPIO_InitTypeDef BUTTONA22;            // create a config structure
		BUTTONA22.Pin = GPIO_PIN_0;            // this is about PIN 8
		BUTTONA22.Mode = GPIO_MODE_INPUT;  // Configure as output with push-up-down enabled
		BUTTONA22.Pull = GPIO_PULLUP;        // the push-up-down should work as pulldown
		BUTTONA22.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

		HAL_GPIO_Init(GPIOA, &BUTTONA22);      // initialize the pin on GPIO* port with HAL
}
/* @}-^-- @}-^-- @}-^-- @}-^-- @}-^-- @}-^-- @}-^-- @}-^-- @}-^-- @}-^-- @}-^-- @}-^-- @}-^--*/

/*:~> :~> :~> :~> :~>Function to take the LEDS pseudo-neighbor PINs  :~> :~> :~> :~> :~> :~>*/
void pseudo_neighbor_LED(int pseudopin){

	if(pseudopin == 1){
  	      // **** set LED A4 = D0 PIN = C7 STMPIN = 7th bit -> PIN 1 **** //
  	      GPIOC->ODR = GPIOC->ODR | 0b00000000000000000000000010000000; // set the lowest bit to 1, leave the others as they are (this will set the lowest bit - PIN 0 - to 1)
  	      HAL_Delay(50);                      // wait a second
  	      GPIOC->ODR = GPIOC->ODR & 0b11111111111111111111111101111111; // this will set the lowest bit (PIN 0) to 0. Guess why!
	}
	else if (pseudopin == 2){
  	     // **** set LED A6 = D1 PIN = C6 STMPIN = 6th bit -> PIN 2 **** //
  	     GPIOC->ODR = GPIOC->ODR | 0b00000000000000000000000001000000; // set the lowest bit to 1, leave the others as they are (this will set the lowest bit - PIN 10 - to 1)
  	     HAL_Delay(50);                      // wait a second
  	     GPIOC->ODR = GPIOC->ODR & 0b11111111111111111111111110111111; // this will set the lowest bit (PIN 10) to 0. Guess why!
	}
	else if (pseudopin == 4){
 	     // **** set LED A8 = D2 PIN = G6 STMPIN = 6th bit -> PIN 3 **** //
 	     GPIOG->ODR = GPIOG->ODR | 0b00000000000000000000000001000000; // set the lowest bit to 1, leave the others as they are (this will set the lowest bit - PIN 9 - to 1)
 	     HAL_Delay(50);                      // wait a second
 	     GPIOG->ODR = GPIOG->ODR & 0b11111111111111111111111110111111; // this will set the lowest bit (PIN 9) to 0. Guess why!

	}
	else if (pseudopin == 8){
 	     // **** set LED A10 = D3 PIN = B4 STMPIN = 4th bit -> PIN 4 **** //
 	     GPIOB->ODR = GPIOB->ODR | 0b00000000000000000000000000010000; // set the lowest bit to 1, leave the others as they are (this will set the lowest bit - PIN 8 - to 1)
 	     HAL_Delay(50);                      // wait a second
 	     GPIOB->ODR = GPIOB->ODR & 0b11111111111111111111111111101111; // this will set the lowest bit (PIN 8) to 0. Guess why!
	}
	else if (pseudopin == 16){
	     // **** set LED A12 = D4 PIN = G7 STMPIN = 7th bit -> PIN 5 **** //
	     GPIOG->ODR = GPIOG->ODR | 0b00000000000000000000000010000000; // set the lowest bit to 1, leave the others as they are (this will set the lowest bit - PIN 8 - to 1)
	     HAL_Delay(50);                      // wait a second
	     GPIOG->ODR = GPIOG->ODR & 0b11111111111111111111111101111111; // this will set the lowest bit (PIN 8) to 0. Guess why!
	}
	else if (pseudopin == 32){
	     // **** set LED A14 = D5 PIN = I0 STMPIN = 0th bit -> PIN 6 **** //
	     GPIOI->ODR = GPIOI->ODR | 0b00000000000000000000000000000001; // set the lowest bit to 1, leave the others as they are (this will set the lowest bit - PIN 8 - to 1)
	     HAL_Delay(50);                      // wait a second
	     GPIOI->ODR = GPIOI->ODR & 0b11111111111111111111111111111110; // this will set the lowest bit (PIN 8) to 0. Guess why!
	}
	else if (pseudopin == 64){
	     // **** set LED A16 = D6 PIN = H6 STMPIN = 6th bit -> PIN 7 **** //
	     GPIOH->ODR = GPIOH->ODR | 0b00000000000000000000000001000000; // set the lowest bit to 1, leave the others as they are (this will set the lowest bit - PIN 8 - to 1)
	     HAL_Delay(50);                      // wait a second
	     GPIOH->ODR = GPIOH->ODR & 0b11111111111111111111111110111111; // this will set the lowest bit (PIN 8) to 0. Guess why!
	}
	else if (pseudopin == 128){
	     // **** set LED A18 = D7 PIN = I3 STMPIN = 3th bit -> PIN 8 **** //
	     GPIOI->ODR = GPIOI->ODR | 0b00000000000000000000000000001000; // set the lowest bit to 1, leave the others as they are (this will set the lowest bit - PIN 8 - to 1)
	     HAL_Delay(50);                      // wait a second
	     GPIOI->ODR = GPIOI->ODR & 0b11111111111111111111111111110111; // this will set the lowest bit (PIN 8) to 0. Guess why!
	}
}
/*:~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~> :~>*/

/* >>  \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ << */

/*VVVVVVVVVV HERE IS THE FCKN MAIN VVVVVVVVVVVVVVVV*//*VVVVVVVVVV HERE IS THE FCKN MAIN VVVVVVVVVVVVVVVV*/
/*VVVVVVVVVV HERE IS THE FCKN MAIN VVVVVVVVVVVVVVVV*//*VVVVVVVVVV HERE IS THE FCKN MAIN VVVVVVVVVVVVVVVV*/

int main(void)
{
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


/* :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) */
/*GEOKB GREEN LED*/
    //BSP_LED_Init(LED_GREEN);
    //BSP_LED_On(LED_GREEN);
/* :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) */

/* >>  \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ << */
/*GEOKB LED RED*/
    led_initialize();
    button_initialize();
/* >>  \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ << */

  /* Infinite loop */
    while (1)
    {
/* :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) */
/*GEOKB GREEN LED*/

    	//TODO:
        //Flash the led on the board with 1000 ms period time
  	    //HAL_Delay(1000); /* GEOBALAZS led blinkig*/
  	    //BSP_LED_Toggle(LED_GREEN);
/* :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) */


/* >>  \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ << */
/*GEOKB LED RED*/
    	//When BUTTON is pressed LED light on//
    	//if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0){
			for(int i = 1 ; i <= 128 ; i <<= 1){
				pseudo_neighbor_LED(i);
			}
			for(int i = 128 ; i >= 1 ; i >>= 1){
				pseudo_neighbor_LED(i);
			}
    	//}
/* >>  \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ \(^ << */
    }


}

/*^^^^^^^^^^^^^^^^^^^^^^^^ HERE IS THE END OF THE FCKN MAIN ^^^^^^^^^^^^^^^^^^^^^^^^*/
/*^^^^^^^^^^^^^^^^^^^^^^^^ HERE IS THE END OF THE FCKN MAIN ^^^^^^^^^^^^^^^^^^^^^^^^*/

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
static void SystemClock_Config(void)
{
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
  if(HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /* activate the OverDrive to reach the 216 Mhz Frequency */
  if(HAL_PWREx_EnableOverDrive() != HAL_OK)
  {
    Error_Handler();
  }

  /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
     clocks dividers */
  RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
  if(HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
static void Error_Handler(void)
{
  /* User may add here some code to deal with this error */
  while(1)
  {
  }
}

/**
  * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
  * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
  *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
  * @param  None
  * @retval None
  */
static void MPU_Config(void)
{
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
static void CPU_CACHE_Enable(void)
{
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
