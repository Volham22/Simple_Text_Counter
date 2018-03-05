#include <iostream>
#include <string>
#include "include/help.h"
#include "include/Counter.h"

using namespace std;

int main(int argc, char* argv[])
{

    string args[argc];

    for(int i = 0; i<argc; i++)
        args[i] = argv[i];

    if(argc > 2)
    {
        printTooMuchArguments();
        return 0;
    }
    else if(argc == 1)
    {
        printTooFewArguments();
        return 0;
    }

    if(args[1] == "help" || args[1] == "HELP")
    {
        printUserHelp();
        return 0;
    }
    else
    {
        Counter count(args[1]);
        count.PrintStats();
        return 0;
    }

}