#include "include/counting.h"

void CountingLetters(ifstream &flux, string &RawText, long int &LineCnt, long int *LetterCount[])
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

void CountingNumbers(ifstream &flux, string &RawText, long int &LineCnt, long int *NumbersCount[])
{
    const char NumbersFind [] = 
    {
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
    };

    /*Load lines into a string */
    string tempText;

    cout << "Loading file ..." << endl;

    while(getline(flux, tempText))
    {
        LineCnt++;
        RawText += tempText;
    }

    /* Counting numbers each numbers */
    for(int i = 0; i<RawText.length(); i++)
    {
        char tempLetter = RawText[i];

        for(int y = 0; y<10; y++)
        {
            if(tempLetter == NumbersFind[y])
            {
                *NumbersCount[y] += 1;
                break;
            }
        }
    }
}

void CountingAll(ifstream &flux, string &RawText, long int &LineCnt, vector<char> &CharList, vector<long int> &FileCount)
{
    bool inVector = false;

    /* Load lines into a string */
    string tempText;

    cout << "Loading file ..." << endl;

    while(getline(flux, tempText))
    {
        RawText += tempText;
        LineCnt ++;
    }

    /* Counting and Adding each char in vector */
    for(int i = 0; i<RawText.length(); i++)
    {
        char tempChar = RawText[i];

        /* Finding all differents char in Files */
        for(int y = 0; y<CharList.size(); y++)
        {
            if(tempChar == CharList[y])
            {
                inVector = true;
                break;
            }
            else
            {
                inVector = false;
            }
        }

        if(!inVector)
        {
            CharList.push_back(tempChar);
        }
    }

    cout << "Found : " << CharList.size() << " differents characters in file, counting ..." << endl;

    /* Adding int according to the number of char in Charlist */ 
    for(int i = 0; i<CharList.size(); i++)
    {
        FileCount.push_back(0);
    }

    /* Counting each char in file */
    for(int i = 0; i<RawText.length(); i++)
    {
        char tempChar = RawText[i];

        for(int y = 0; y<CharList.size(); y++)
        {
            if(tempChar == CharList[y])
            {
                FileCount[y]++;
                break;
            }
        }
    }
}