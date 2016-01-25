#include "NumberWordLength4.h"

NumberWordLength4::NumberWordLength4()
{
}

// Get the word from the given number.
string NumberWordLength4::getWordForNumber( string str )
{
	ostringstream result;
	string value = NumberWord::isNumberInMap( str );
	
	if ( !value.empty() )
		result << value;
	else
	{
		int digit = CHAR_TO_INT( str[0] );
		digit = digit * 1000;
		result << NumberWord::isNumberInMap( digit ) << " ";

		result << NumberWordLength3::getWordForNumber( str.substr(1) );
	}

	return result.str();
}