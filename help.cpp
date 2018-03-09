#include "include/help.h"

void printHelp(string unknowArgs)
{
    cout << "Unknow argument: " << unknowArgs << endl;
    cout << "Use : Text_Counter <text_file_path> <numbers option or all characters>" << endl;
}

void printUserHelp()
{
    cout << "============================================================================" << endl;
    cout << "Syntax : Text_Counter <text_file_path> <numbers option or all characters>" << endl;
    cout << "Note: The default's mode is Letter" << endl;
    cout << "Example: Text_Counter text.txt number will run the program in number mode" << endl;
    cout << "============================================================================" << endl;
}

void printTooMuchArguments()
{
    cout << "Too much arguments, please use :" << endl;
    cout << " Text_Counter <text_file_path> <numbers option or all characters>" << endl;
}

void printTooFewArguments()
{
    cout << "Too few arguments, please use :" << endl;
    cout << " Text_Counter <text_file_path> <numbers option or all characters>" << endl;
}