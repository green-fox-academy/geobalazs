#include <stdio.h>

// TODO:
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  enum CarType type;
  double km;
  double gas;
};

void car_stats(struct Car autocar){

    if( autocar.type != 3){
    printf( "I drove: %.1f\n",autocar.km);
    printf( "Gas left: %.1f\n",autocar.gas);
    } else{
    printf( "%f\n",autocar.km);
    }
}

int main() {

    struct Car car = {VOLVO , 100 , 32};

    car_stats(car);

  return 0;
}

