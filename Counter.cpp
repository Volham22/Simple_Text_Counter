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


void Counter::PrintStats()
{
    ifstream Flux(Path.c_str());

    if(FileExist(Flux))
    {
        int *p_LetterCount[26];

        for(int i = 0; i<26; i++)
        {
            p_LetterCount[i] = &LetterCount[i];
        }

        Counting(Flux, RawText, LineCnt, p_LetterCount);

        for(int i = 0; i<26; i++)
        {
            cout << Letters[i] << " : " << LetterCount[i] << endl;
        }
    }
    else
    {
        cout << "ERROR: Unable to open file !" << endl;
        return;
    }
}