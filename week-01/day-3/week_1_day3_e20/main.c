#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint8_t z = 210;
	// if z is between 10*10 and 20*10 print 'Sweet!'
	// if less than 10*10 print 'More!',
	// if more than 20*10 print 'Less!'
    if ((z > 10*10) && (z < 20*10)){

        printf("sweet\n");

    } else if (z < (10*10)){

        printf("more\n");
    } else {
        printf("less\n");
    }

    return 0;
}
