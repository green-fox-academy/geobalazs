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
        virtual void calc_area() = 0;

};

class Circle: Shape {

    private:
        float area;

    public:
        void calc_area(float radius){
            area = radius * radius * 2;
        }
};

class Triangle: Shape{

    private:
        float area;

    public:
        void calc_area(float base, float height){
            area = base * height / 2;
        }
};

int main()
{

    return 0;
}
