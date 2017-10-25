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

    if( CarType != 4){
    printf( "%d:",car.km);
    printf( "%d:",car.gas);
    } else{
    printf( "%d:",car.km);
    }
}

int main() {

    struct Car car;

    car_stats(car);

  return 0;
}

