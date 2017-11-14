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
            float sum = 0;
            for (unsigned int i = 0 ; i < grades.size() ; ++i){
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
    so.add_grade(4);
    so.add_grade(5);
    so.add_grade(2);
    so.average_calc();
    cout << "The class average: " << so.get_average();




  return 0;
}
