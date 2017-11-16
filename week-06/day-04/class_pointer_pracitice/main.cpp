#include <iostream>

using namespace std;

class Vehicle {
    public:
        virtual void moveV(){
            cout << "Vehicle move" << endl;
        }

};
class ElectricVehicle: public Vehicle {
    public:
        void moveV(){
            cout << "Electric vehicle move silently" << endl;
        }
};

class EAuto: public ElectricVehicle {
    public:
        void moveV(){
            cout << "Eauto move freely" << endl;
        }
};

int main()
{
    Vehicle vo;
    ElectricVehicle evo;
    EAuto eao;
    Vehicle *ev_p = &evo;
    (ElectricVehicle *)ev_p;
    Vehicle *eao_p = &eao;

    //vo.moveV();
    //evo.moveV();
    //cout << ev_p << endl;
    ev_p -> moveV();
    //cout << ev_p2 << endl;
    ev_p -> moveV();
    //eao_p -> moveV();

    return 0;
}
