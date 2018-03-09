#ifndef COUNTING_H
#define COUNTING_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void CountingLetters(ifstream &flux, string &RawText, int &LineCnt, int *LetterCount[]);
void CountingNumbers(ifstream &flux, string &RawText, int &LineCnt, int *NumbersCount[]);
void CountingAll(ifstream &flux, string &RawText, int &LineCnt, vector<char> &CharList, vector<int> &FileCount);

#endif