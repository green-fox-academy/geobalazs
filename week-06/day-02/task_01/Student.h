#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student {

  private:  //varibales for storing data ALLWAYS coca-cola no, not; ALWAYS private
    string name;
    unsigned int age;

  public:
    Student( string name , unsigned int age); //constructor for fill variables
    virtual ~Student(); //destructor
    void data_print (); // print method

};


#endif // STUDENT_H
