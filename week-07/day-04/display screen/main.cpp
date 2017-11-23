#include <iostream>

using namespace std;

void print_command_list(){
    cout
    << "Temperature Logger Application" << endl
    << "==============================" << endl
    << "Commands:" << endl
    << " h        Show command list" << endl
    << " o        Open port" << endl
    << " s        Start logging / Stop logging" << endl
    << " c        Close port" << endl
    << " l        List after error handling" << endl
    << " e        Exit from the program" << endl;
}


int main()
{
    print_command_list();
    return 0;
}
