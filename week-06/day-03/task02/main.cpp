#include <iostream>
#include <vector>

using namespace std;

// Countinue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)

class Shape {

    public:
        virtual void calc_area() = 0;
        virtual void get() = 0;
};

class Circle: Shape {

    private:
        float area;
        float radius;

    public:
        Circle(float radius){
            this -> radius = radius;
        }
        ~Circle(){
            cout << "Your life Circle is destruced >)" << endl;
        }
        void calc_area(){
            this->area = radius * radius * 3.14;
        }
        void get(){
            cout << endl;
            cout << "Radius: " << radius << " Area: " << area << endl;
            cout << endl;
        }
};

class Triangle: Shape {

    private:
        float area;
        float base;
        float height;

    public:
        Triangle(float base , float height){
            this -> base = base;
            this -> height = height;
        }
        ~Triangle(){
            cout << "You lost your base triangle >)" << endl;
            cout << endl;
        }

        void calc_area(){
            this->area = base * height / 2;
        }
        void get(){
            cout << "Height: " << height << " Base: " << base << " Area: " << area << endl;
            cout << endl;
        }
};

int main()
{

    Circle co(2);

    Triangle to(3,5);

    co.calc_area();
    co.get();

    to.calc_area();
    to.get();

    return 0;
}
