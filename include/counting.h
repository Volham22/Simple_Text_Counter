#ifndef COUNTING_H
#define COUNTING_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Counting(ifstream &flux, string &RawText, int &LineCnt, int *LetterCount[]);

#endif