#include "include/counting.h"

void Counting(ifstream &flux, string &RawText, int &LineCnt, int *LetterCount[])
{

    const char LetterFindLow [] = 
    {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
    };

    const char LetterFindUp [] = 
    {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };

    bool LetterFound = false;

    /* Load lines into a string */
    string tempText;

    cout << "Loading File ..." << endl;

    while(getline(flux, tempText))
    {
        LineCnt++;
        RawText += tempText;
        //cout << RawText << endl;
    }

    /* Count each letters */
    for(int i = 0; i<RawText.length(); i++)
    {
        char tempLetter = RawText[i];

        for(int y = 0; y<26; y++)
        {
            if(tempLetter == LetterFindLow[y])
            {
                *LetterCount[y] += 1;
                LetterFound = true;
                break;
            }
        }

        if(!LetterFound)
        {
            for(int y = 0; y<26; y++)
            {
                if(tempLetter == LetterFindUp[y])
                {
                    *LetterCount[y] += 1;
                    break;
                }
            }
        }

        LetterFound = false;

    }
}