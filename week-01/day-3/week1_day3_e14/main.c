#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint8_t number = 254;
	uint8_t result;

	result = number + 23;
	// Check the result with printf
    printf("%d\n", result);
 	// What happened?! << the result is 21; 254 + 23 = 277, 8 bit = 2^8=256, 256 - 277 that is 21 less than can be stored in 8 bit
	// Try again with different datatype
	uint16_t result_16 = number + 23;
	// Check the result with printf
    printf("%d\n", result_16);
	// What happened and why? << the result is 277, 2^16 = 65791 thus 277 can be stored

	//----------------------------------------
	int8_t number_negative = number;
	// Check the result with printf
    printf("%d", number_negative);
	// What happened and why? the result is -2, the integer data type is signed thus it stores numbers from -128 -- + 127, 254 is stored as 11111110 = -128+126 = -2
    return 0;
}
