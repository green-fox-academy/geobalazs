#include <iostream>
#include <vector>

using namespace std;

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private field)

class Shape {

    public:
        virtual float calc_area() = 0;
};

class Circle: Shape {

    private:
        float area;
        float radius;

    public:
        Circle(float radius){
            this -> radius = radius;
        }
        float calc_area(){
                return this->area = radius * radius * 3.14;
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
        float calc_area(){
            return this->area = base * height / 2;
        }
};

int main()
{

    Circle co(2);
    Triangle to(3,5);

    cout << co.calc_area() << endl;
    cout << to.calc_area() << endl;

    return 0;
}
