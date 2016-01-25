#include "NumberWordLength2.h"

NumberWordLength2::NumberWordLength2()
{
}

// Get the word from the given number.
string NumberWordLength2::getWordForNumber( string str )
{
	ostringstream result;
	string value = NumberWord::isNumberInMap( str );
	
	if ( !value.empty() )
		result << value;
	else
	{
		int digit = CHAR_TO_INT( str[0] );
		digit = digit * 10;
		result << NumberWord::isNumberInMap( digit ) << " ";
		digit = CHAR_TO_INT( str[1] );
		result << NumberWord::isNumberInMap( digit );
	}

	return result.str();
}


