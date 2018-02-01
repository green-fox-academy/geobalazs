UART_HandleTypeDef uart_handle;
TIM_HandleTypeDef TimHandle;
GPIO_InitTypeDef gpio_init_structure;



void peripheral_init();

enum morsecode{a, c, i, s, o} morse;
char array[20];
uint8_t tim_counter = 0;
uint8_t short_signal = 0;
uint8_t long_signal = 0;
uint8_t space = 0;
int f;


int main(void) {
    MPU_Config();
    CPU_CACHE_Enable();
    HAL_Init();
    SystemClock_Config();
    peripheral_init();

    printf("\n-----------------WELCOME-----------------\r\n");

    while (1) {   }
}

void TIM2_IRQHandler() {
    HAL_TIM_IRQHandler(&TimHandle);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	tim_counter++;
}

void EXTI15_10_IRQHandler(){
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin){

 	if (tim_counter > 10 && tim_counter < 140 ){    // tim_counter > 50 && tim_counter < 250

 		//printf("short signal! timer: %d \n", tim_counter);
 		short_signal++;
 		tim_counter = 0;

 	} else if (tim_counter > 140 && tim_counter < 210 ){   // tim_counter > 250 && tim_counter < 750

 		//printf("long signal. timer: %d\n", tim_counter);
 		long_signal++;
 		tim_counter = 0;

 	} else if (tim_counter > 210){   // tim_counter > 1000

 		f = 0;
 		printf("The word you morsed in: ");
 		for(int j = 0; j < 20; j++){
 			printf("%c", array[j]);
 		}
 		printf("\nEnd of the word! \n\n");
 		tim_counter = 0;

 	} else {
 		printf("you moron!! Watch out for the right signal distance!! \n");
 		tim_counter = 0;
 	}


 	 if(short_signal == 1 && long_signal == 1) {
		   printf("a\n");
		   array[f] = 'a';
		   f++;
		  long_signal = 0;
		 short_signal = 0;

	   }

 	   if( long_signal == 2 &&  short_signal == 2) {
		   printf("c\n");
		  array[f] = 'c';
		   f++;
		  long_signal = 0;
		  short_signal = 0;

		}

 	  if(short_signal == 2 ) {
			printf("i\n");
			array[f] = 'i';
			f++;
			long_signal = 0;
			short_signal = 0;

		}

 	 if(short_signal == 3 ) {
		   printf("s\n");
		  array[f] = 's';
		   f++;
		  long_signal = 0;
		   short_signal = 0;

		}

 	if(long_signal == 3 ) {
		printf("o\n");
		array[f] = 'o';
		f++;
		long_signal = 0;
		short_signal = 0;

	}


/*
*/

    if(morse == a || morse == c || morse == i || morse == s || morse == o){
           BSP_LED_Toggle(LED_GREEN);
       } else {
       	BSP_LED_Off(LED_GREEN);
       }

}
void peripheral_init(){
    __HAL_RCC_GPIOI_CLK_ENABLE();
    gpio_init_structure.Pin = GPIO_PIN_11;
    gpio_init_structure.Mode = GPIO_MODE_IT_RISING;
    gpio_init_structure.Speed = GPIO_SPEED_HIGH;
    gpio_init_structure.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOI, &gpio_init_structure);
    HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
    HAL_NVIC_SetPriority(EXTI15_10_IRQn, 15, 0);

    BSP_LED_Init(LED_GREEN);
    BSP_LED_On(LED_GREEN);

    __HAL_RCC_TIM2_CLK_ENABLE();
    uart_handle.Init.BaudRate = 115200;
    uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
    uart_handle.Init.StopBits = UART_STOPBITS_1;
    uart_handle.Init.Parity = UART_PARITY_NONE;
    uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    uart_handle.Init.Mode = UART_MODE_TX_RX;
    BSP_COM_Init(COM1, &uart_handle);

    TimHandle.Instance = TIM2;  // 108 000 000  / 54 000 = 2000
    TimHandle.Init.Period = 1;    //   65535
    TimHandle.Init.Prescaler =  54000;   // 54000
