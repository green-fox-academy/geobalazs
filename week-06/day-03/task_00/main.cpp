#include <iostream>
#include <vector>

using namespace std;

// Create a Human class which is a base class for
// SuperHuman and AquaHuman
// Create a virtual function in Human class called travelling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.

class Human {
    public:
        virtual void travelling(){
            cout << "walking DEATH" << endl;
        }
};

class SuperMan: Human{
    public:
        void travelling(){
            cout << "Fly on your way, like an eagle\n"
                 << "Fly as high as the sun\n"
                 << "On your way like an eagle\n"
                 << "Fly and touch the sun"
                 << endl;
        }
};

class AquaMan: Human{
    public:
        void travelling(){
            cout << "Riding with dolphins" << endl;
        }
};

int main()
{
    Human hm;
    SuperMan sm;
    AquaMan am;

    //hm.travelling();
    sm.travelling();
    //sm.travelling();
    //am.travelling();
    //am.travelling();
    return 0;
}
