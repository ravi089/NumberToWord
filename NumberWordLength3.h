#ifndef NUMBER_WORD_LENGTH3_H
#define NUMBER_WORD_LENGTH3_H

#include "NumberWordLength2.h"

class NumberWordLength3 : public NumberWordLength2
{
public:
	NumberWordLength3();
	virtual string getWordForNumber( string str );
};

#endif