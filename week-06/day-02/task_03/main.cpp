#include <iostream>
#include <string>

using namespace std;

class Student {

  private:
    string name;
    unsigned int age;

  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

  string greet(){

    return "Hello my name is: " + name;

  }
};

int main() {
  // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"

  Student so("geobalazs" , 33);

  cout << so.greet();

  return 0;
}
