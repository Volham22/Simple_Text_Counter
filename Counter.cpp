#include "include/Counter.h"

Counter::Counter(string filePath)
{
    Path = filePath;

    /* Init Int Array to 0 */

    for(int i = 0; i<26; i++)
        LetterCount[i] = 0;

    for(int i = 0; i<10; i++)
        NumbersCount[i] = 0;

}

bool Counter::FileExist(ifstream &flux)
{
    if(flux)
        return true;
    else
        return false;

}

void Counter::PrintStatsLetter()
{
    ifstream Flux(Path.c_str());

    if(FileExist(Flux))
    {
        long int *p_LetterCount[26];

        for(int i = 0; i<26; i++)
        {
            p_LetterCount[i] = &LetterCount[i];
        }

        CountingLetters(Flux, LineCnt, p_LetterCount);

        for(int i = 0; i<26; i++)
        {
            cout << Letters[i] << " : " << LetterCount[i] << endl;
        }

        cout << "Number of lines found in " << Path << " " << LineCnt << endl;
        
    }
    else
    {
        cout << "ERROR: Unable to open file !" << endl;
        printHelp(Path);
    }
}

void Counter::PrintStatsNumbers()
{
    ifstream Flux(Path.c_str());

    if(FileExist(Flux))
    {
        long int *p_NumbersCount[10];

        for(int i = 0; i<10; i++)
        {
            p_NumbersCount[i] = &NumbersCount[i];
        }

        CountingNumbers(Flux, LineCnt, p_NumbersCount);

        for(int i = 0; i<10; i++)
        {
            cout << Numbers[i] << " : " << NumbersCount[i] << endl;
        }

        cout << "Number of lines found in " << Path << " " << LineCnt << endl;

    }
    else
    {
        cout << "ERROR: Unable to open file !" << endl;
        printHelp(Path);
    }
}

void Counter::PrintStatsAll()
{
    ifstream Flux(Path.c_str());

    if(FileExist(Flux))
    {
        vector<char> CharFound;
        vector<long int> CharCount;

        CountingAll(Flux, LineCnt, CharFound, CharCount);

        cout << "Number of lines found in " << Path << " " << LineCnt << endl;

        for(unsigned int i = 0; i<CharFound.size(); i++)
        {
            cout << CharFound[i] << " : " << CharCount[i] << endl;
        }
    }
    else
    {
        cout << "ERROR: Unable to open file !" << endl;
        printHelp(Path);
    }
}