#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv)
{
    bool isDone = false;
    do {
        cout << "[espeak]$ ";
        string saying = "\0";
        getline(cin, saying);
        
        if (saying == "exit")
            isDone = true;
        else
        {
        string command = "espeak \"" + saying + "\"";
    
        system(command.c_str());
        }
    } while(isDone == false);

    return 0;
}
