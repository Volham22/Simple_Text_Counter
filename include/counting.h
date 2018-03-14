#ifndef COUNTING_H
#define COUNTING_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void CountingLetters(ifstream &flux, string &RawText, long int &LineCnt, long int *LetterCount[]);
void CountingNumbers(ifstream &flux, string &RawText, long int &LineCnt, long int *NumbersCount[]);
void CountingAll(ifstream &flux, string &RawText, long int &LineCnt, vector<char> &CharList, vector<long int> &FileCount);

#endif