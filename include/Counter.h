#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "include/help.h"
#include "include/counting.h"

using namespace std;

class Counter
{
    public:
    Counter(string filePath);
    void PrintStatsLetter();
    void PrintStatsNumbers();
    void PrintStatsAll();
    
    private:
    string Path;
    string RawText;
    long int LetterCount[26];
    long int NumbersCount[10];
    long int LineCnt = 0;

    const char Letters [26] = 
    {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };
    const char Numbers [10] =
    {
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
    };

    bool FileExist(ifstream &flux);
    
};

#endif