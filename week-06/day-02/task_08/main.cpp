#include <iostream>
#include <string>
#include <vector>

    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

using namespace std;

class Student{

    private:
        int class_members;
        float average;
        vector<int> grades;
    public:
        Student(int class_members){
            this -> class_members = class_members;
        }
        void add_grade(int number){
            grades.push_back(number);
        }
        void average_calc(){
            int sum = 0;
            for (unsigned int i = 0 ; i < grades.size() - 1 ; ++i){
                sum += grades[i];
            }
            average = sum / class_members;
        }
        float get_average(){
            return average;
        }

};

int main()
{
    Student so(3);



  return 0;
}
