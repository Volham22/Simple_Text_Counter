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

    if(args[1] == "")
    {
        printHelp(args[1]);
        return 0;
    }

    Counter count(args[1]);
    count.PrintStats();
    
    return 0;
}