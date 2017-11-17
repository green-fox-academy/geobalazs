#include <iostream>
//#include <string>
#include <vector>

using namespace std;

class Todo{
    protected:
        vector<string> taskVector;
        vector<int> priorityVector;
        string command = "";
        string task = "";
        int priority = 0;

    public:
        void add_new_task(){
            cin >> task;
            taskVector.push_back(task);
        }
        void add_priority(){
            cin >> priority;
            priorityVector.push_back(priority);
        /*for (unsigned int i = 0; i < priorityVector.size(); ++i){
                cout << priorityVector[i] << taskVector[i] << endl;
          }*/
        }

};

/*class Engine: public Todo{
    public:
        void program_engine(){
            while (1){
                cin >> command;

                if (command == "-exit"){
                    cout << command;
                    break;
                }
                else if (command == "-a"){
                    add_new_task();
                }
                else if (command == "-p"){
                    add_priority();
                }
            }
        }
};*/

class WelcomeScreen{
    public:
    void print_welcome_screen(){
        cout << "\tTodo application" << endl
        << "============================== " << endl
        << "Commands:" << endl
        << "-a     Adds a new task" << endl
        << "-wr    Write current todos to file" << endl
        << "-rd    Read todos from a file" << endl
        << "-l     Lists all the tasks" << endl
        << "-e     Empty the list" << endl
        << "-rm    Removes a task" << endl
        << "-c     Completes a task" << endl
        << "-p     Add priority to a task" << endl
        << "-lp    Lists all the tasks by priority " << endl
        << "-exit  Exit from the program" << endl << endl;}
};

int main() {
    WelcomeScreen wso;
    Todo tdo;
    //Engine eo;

    wso.print_welcome_screen();
    //tdo.program_engine();
    //tdo.add_new_task();
    //tdo.add_priority();
    eo.program_engine();
    tdo.add_new_task();
    tdo.add_priority();

    return 0;
}
