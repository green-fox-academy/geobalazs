#include <stdio.h>
#include <stdint.h>

    //TODO: Change the bits to 64

    //TODO: print out the structure members


struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

int main() {
    struct Computer computer = {3.2, 8, 32};

    computer.bits = 64;

    printf("%.1f\n" , computer.cpu_speed_GHz);
    printf("\n%d\n" , computer.ram_size_GB);
    printf("\n%d\n" , computer.bits);

    return 0;
}
