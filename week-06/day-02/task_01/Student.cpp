#include "Student.h"
#include <iostream>

Student :: Student( string name , unsigned int age){

        this->name = name;
        this->age = age;
}

Student :: ~Student(){

        cout << "That's me, ciao!" << endl;
}

void Student :: data_print (){

        cout << "My name: " << name << " My age: " << age << endl;

}


