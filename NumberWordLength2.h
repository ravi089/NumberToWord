#ifndef NUMBER_WORD_LENGTH2_H
#define NUMBER_WORD_LENGTH2_H

#include "NumberWord.h"

class NumberWordLength2 : public NumberWord
{
public:
	NumberWordLength2();
	virtual string getWordForNumber( string str );
};

#endif