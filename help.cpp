#include "include/help.h"

void printHelp(string unknowArgs)
{
    cout << "Unknow argument: " << unknowArgs << endl;
    cout << "Use : Text_Counter <text_file_path>" << endl;
}

void printUserHelp()
{
    cout << "=========================================" << endl;
    cout << "Syntax : Text_Counter <text_file_path>" << endl;
    cout << "=========================================" << endl;
}

void printTooMuchArguments()
{
    cout << "Too much arguments, please use :" << endl;
    cout << " Text_Counter <text_file_path>" << endl;
}

void printTooFewArguments()
{
    cout << "Too few arguments, please use :" << endl;
    cout << " Text_Counter <text_file_path>" << endl;
}