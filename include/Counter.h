#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>
#include <string>
#include <fstream>
#include "include/help.h"
#include "include/counting.h"

using namespace std;

class Counter
{
    public:
    Counter(string filePath);
    void PrintStats();
    
    private:
    string Path;
    string RawText;
    int LetterCount[26];
    int LineCnt = 0;
    char Letters [26] = 
    {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };

    bool FileExist(ifstream &flux);
    
};

#endif