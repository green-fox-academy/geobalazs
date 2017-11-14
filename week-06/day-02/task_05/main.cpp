#include <iostream>
#include <string>

    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

using namespace std;

class Circle {

    private:

        float radius;

    public:

        Circle(float radius){

            this -> radius = radius;
        }

        float get_area(){

            return radius * 2 * 3.14;
        }

        float get_circumference(){

            return radius * radius * 3.14;
        }
};

int main()
{

    Circle co(4);
    cout << "Circle circumference: " << co.get_circumference() << endl;
    cout << "Circle area: " << co.get_area() << endl;

  return 0;
}
