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
            cout << "Radius: " << radius << " Area: " << area << endl;
        }
};

class Triangle: Shape {

    private:
        float area;
        float base;
        float height;

    public:
        void calc_area(){
            this->area = base * height / 2;
        }
};

int main()
{

    Circle co(2);
//    Triangle to(3,5);

    co.calc_area();
    co.get();
//    cout << to.calc_area() << endl;

    return 0;
}
