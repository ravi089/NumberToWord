#include "NumberWordLength3.h"

NumberWordLength3::NumberWordLength3()
{
}

// Get the word from the given number.
string NumberWordLength3::getWordForNumber( string str )
{
	ostringstream result;
	string value = NumberWord::isNumberInMap( str );
	
	if ( !value.empty() )
		result << value;
	else
	{
		int digit = CHAR_TO_INT( str[0] );
		digit = digit * 100;
		result << NumberWord::isNumberInMap( digit ) << " ";

		result << NumberWordLength2::getWordForNumber( str.substr(1) );
	}

	return result.str();
}