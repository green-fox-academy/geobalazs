#include <iostream>
#include <string>
#include <vector>

#include "SerialPortWrapper.h"

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

    // Write port data to the consol
    /*vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }*/

    // connection

        SerialPortWrapper *serial = new SerialPortWrapper("COM3", 115200);

    // **************************************************** //

        serial->openPort();
        string line;
        string input;
        while(1){
            serial->readLineFromPort(&line);
            if (line.length() > 0){
                cout << line << endl;
            }
            cout << "Feed me: " << endl;
            getline( cin , input);
            if (input == "h"){
                cout << input << endl;
                print_command_list();
            }

        }
        serial->closePort();
    return 0;
}
