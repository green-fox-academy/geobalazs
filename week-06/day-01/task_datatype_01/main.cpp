#include <iostream>

using namespace std;

// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{

    int coding_time = 6; // hours / student / day
    int semester_long = 17; //weeks
    int days = 5;

    int full_coding_time = semester_long * coding_time * days;

    cout << full_coding_time << " hours is spent with coding in a semester by an attendee" << endl;


    return 0;
}
