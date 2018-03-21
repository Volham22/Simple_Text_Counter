#ifndef COUNTING_H
#define COUNTING_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void CountingLetters(ifstream &flux, long int &LineCnt, long int *LetterCount[]);
void CountingNumbers(ifstream &flux, long int &LineCnt, long int *NumbersCount[]);
void CountingAll(ifstream &flux, long int &LineCnt, vector<char> &CharList, vector<long int> &FileCount);

#endif