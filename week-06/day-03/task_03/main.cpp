// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It shoud return the costs of the paingting

#include <iostream>
#include <vector>

using namespace std;

class Shape {

    protected:
        float area;

    public:
        virtual float calc_area() = 0;
        //virtual void get() = 0;
        virtual float how_much_to_paint(float price) = 0;
};

class Circle: Shape {

    private:
        //float area;
        float radius;

    public:
        Circle(float radius){
            this -> radius = radius;
        }
        ~Circle(){
            cout << "Your life Circle is destruced >)" << endl;
        }
        float calc_area(){
            return this->area = radius * radius * 3.14;
        }
        /*void get(){
            cout << endl;
            cout << "Radius: " << radius << " Area: " << area << endl;
            cout << endl;
        }*/
        float how_much_to_paint(float price){
            return area * price;
        }
};

class Triangle: Shape {

    private:
        //float area;
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

        float calc_area(){
            return this->area = base * height / 2;
        }
        /*void get(){
            cout << "Height: " << height << " Base: " << base << " Area: " << area << endl;
            cout << endl;
        }*/
        float how_much_to_paint(float price){
            return area * price;
        }
};

int main()
{

    Circle co(2);

    Triangle to(3,5);

    co.calc_area();
    cout << "The price of the circle painting: " << co.how_much_to_paint(10) << endl << endl;

    to.calc_area();
    cout << "The price of the triangle painting: " << to.how_much_to_paint(10) << endl << endl;

    return 0;
}
