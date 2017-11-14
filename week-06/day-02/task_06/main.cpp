#include <iostream>
#include <string>

    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

using namespace std;

class Car{

    private:
        string type;
        float km;
        float new_km;

    public:
        Car(string type , float km){
            this -> type = type;
            this -> km = km;
        }
        ~Car(){
            cout << "Your car is stoped...";
        }
        void run(float new_km){
            this -> km = km + new_km;
        }

        void my_print(){
            cout << km << endl;
        }
} ;

int main() {

    Car co("Ford" , 120);
    co.my_print();
    co.run(10);
    co.my_print();

  return 0;
}
