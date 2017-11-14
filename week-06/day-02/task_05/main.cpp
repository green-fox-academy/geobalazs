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


};

int main()
{

    Circle co(4);

  return 0;
}
