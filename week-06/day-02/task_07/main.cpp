#include <iostream>
#include <string>

    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

using namespace std;

class Pirate{

    private:

        int rum_number;

    public:
        Pirate(int rum_number){
            this -> rum_number = rum_number;
        }

        void drink_rum(){
            this -> rum_number = rum_number + 1;
        }

        void drinking(int drink_number){
            for(int i = 0 ; i < drink_number; i++){
                drink_rum();
            }
        }

        const char*hows_goin_mate(){
            if (rum_number >= 5){
                return "Arrrr!";
            } else {
                return "Nothin!";
            }
        }
        void rum_print(){
            cout << "Am have drunk "<< rum_number << " rummm, tesooo" << endl;
        }
};

int main() {

    Pirate po(0);
    po.drinking(5);
    po.rum_print();
    cout << po.hows_goin_mate();

  return 0;
}
