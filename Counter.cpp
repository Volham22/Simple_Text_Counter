#include "include/Counter.h"

Counter::Counter(string filePath)
{
    Path = filePath;

    /* Init Int Array to 0 */

    for(int i = 0; i<26; i++)
        LetterCount[i] = 0;

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
        int *p_LetterCount[26];

        for(int i = 0; i<26; i++)
        {
            p_LetterCount[i] = &LetterCount[i];
        }

        CountingLetters(Flux, RawText, LineCnt, p_LetterCount);

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
        int *p_NumbersCount[9];

        for(int i = 0; i<9; i++)
        {
            p_NumbersCount[i] = &NumbersCount[i];
        }

        CountingNumbers(Flux, RawText, LineCnt, p_NumbersCount);

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