#ifndef NUMBER_WORD_H
#define NUMBER_WORD_H

#include <string>
#include <vector>
#include <cstdio>
#include <map>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <memory.h>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <set>
using namespace std;

#define CHAR_TO_INT(c) ((c) - '0')

class NumberWord
{
private:
	static map<int, string> createMapping();
	static const map<int, string> mappings;
public:
	NumberWord();
	static string isNumberInMap( string number );
	static string isNumberInMap( int number );
	virtual string getWordForNumber( string str ) = 0;
};

#endif