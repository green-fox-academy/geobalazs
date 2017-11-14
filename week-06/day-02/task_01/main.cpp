#include <iostream>
#include <string>

using namespace std;

class Student {
  private:  //varibales for storing data ALLWAYS coca-cola no, not; ALWAYS private
    string name;
    unsigned int age;
  public:
    //constructor for fill variables
    Student( string name , unsigned int age){
        this->name = name;
        this->age = age;
    }
    void data_print (){
        cout << "My name: " << name << " My age: " << age << endl;
    }

};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21

    Student so; // objektum letrehozasa

  return 0;
}
