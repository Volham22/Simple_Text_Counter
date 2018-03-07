#ifndef COUNTING_H
#define COUNTING_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void CountingLetters(ifstream &flux, string &RawText, int &LineCnt, int *LetterCount[]);
void CountingNumbers(ifstream &flux, string &RawText, int &LineCnt, int *NumbersCount[]);

#endif