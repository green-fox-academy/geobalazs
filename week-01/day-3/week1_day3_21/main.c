#include <stdio.h>
#include <stdint.h>

	// This means "false"
	// if credits are at least 50,
	// and is_bonus is false decrement ab by 2
	// if credits are smaller than 50,
	// and is_bonus is false decrement ab by 1
	// if is_bonus is true ab should remain the same

int main() {

	uint8_t ab = 123;
	uint8_t credits = 10;
	uint8_t is_bonus = 1;

	if( credits >= 50 && is_bonus == 0){
        ab -= 2;
        printf("%d" , ab);
	} else if (credits < 50 && is_bonus == 0) {
        ab--;
        printf("%d" , ab);
    } else {
        printf("%d" , ab);
    }
	return 0;
}
