#ifndef NUMBER_WORD_LENGTH4_H
#define NUMBER_WORD_LENGTH4_H

#include "NumberWordLength3.h"

class NumberWordLength4 : public NumberWordLength3
{
public:
	NumberWordLength4();
	virtual string getWordForNumber( string str );
};

#endif