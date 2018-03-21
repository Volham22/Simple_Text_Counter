#include "include/counting.h"

void CountingLetters(ifstream &flux, long int &LineCnt, long int *LetterCount[])
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
        
        for(int i = 0; i<tempText.length(); i++)
        {
            char tempChar = tempText[i];

            for(int y = 0; y<26; y++)
            {
                if(tempChar == LetterFindLow[y] || tempChar == LetterFindUp[y])
                    *LetterCount[y] += 1;
            }
        }
    }
}

void CountingNumbers(ifstream &flux, long int &LineCnt, long int *NumbersCount[])
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

        for(int i = 0; i<tempText.length(); i++)
        {
            char tempChar = tempText[i];

            for(int y = 0; y<10; y++)
            {
                if(tempChar == NumbersFind[y])
                    *NumbersCount[y] += 1;
            }
        }
    }

    while(getline(flux, tempText))
        cout << tempText << endl;
}

void CountingAll(ifstream &flux, long int &LineCnt, vector<char> &CharList, vector<long int> &FileCount)
{
    bool inVector = false;
    const int firstChar = flux.tellg();

    /* Load lines into a string */
    string tempText;

    cout << "Loading file ..." << endl;

    while(getline(flux, tempText))
    {
        LineCnt ++;

        for(int i = 0; i<tempText.length(); i++)
        {
            char tempChar = tempText[i];

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
                FileCount.push_back(0);
            }
        }
    }

    cout << "Found: " << CharList.size() << " differents characters" << endl;
    flux.clear();
    flux.seekg(firstChar, ios::beg);

    while(getline(flux, tempText))
    {
        for(int i = 0; i<tempText.length(); i++)
        {
            char tempChar = tempText[i];

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
}