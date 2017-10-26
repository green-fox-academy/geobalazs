#include <stdio.h>
#include <stdint.h>

    //TODO: Change the bits to 64

    //TODO: print out the structure members


typedef struct Data{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
}Computers;

void print_struct(struct Data name);

void print_struct2(Computers *name);

int main() {

    Computers laptop = {3.2, 16, 32};
    struct Data tablet = {2.5, 8, 32};
    struct Data smartphone = {1.5, 4, 32};

    //computer.bits = 64;

    print_struct2(&laptop);
    print_struct2(&tablet);
    print_struct(smartphone);

//    printf("%.1f\n" , laptop.cpu_speed_GHz);
//    printf("%d\n" , laptop.ram_size_GB);
//    printf("%d\n\n" , laptop.bits);

    //printf("%.1f\n" , tablet.cpu_speed_GHz);
    //printf("%d\n" , tablet.ram_size_GB);
    //printf("%d\n\n" , tablet.bits);


    //printf("%.1f\n" , smartphone.cpu_speed_GHz);
    //printf("%d\n" , smartphone.ram_size_GB);
    //printf("%d\n\n" , smartphone.bits);

    return 0;
}

void print_struct2(Computers *name){

    printf("%.1f\n" , name->cpu_speed_GHz);
    printf("%d\n" , name->ram_size_GB);
    printf("%d\n\n" , name->bits);
}

void print_struct(struct Data name){

    printf("%.1f\n" , name.cpu_speed_GHz);
    printf("%d\n" , name.ram_size_GB);
    printf("%d\n\n" , name.bits);

}
