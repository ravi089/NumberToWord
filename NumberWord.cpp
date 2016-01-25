#include "NumberWord.h"

const map<int,string> NumberWord::mappings = NumberWord::createMapping();

map<int, string> NumberWord::createMapping()
{
	map<int, string> mappings;
	mappings.insert(make_pair<int, string>( 1, "One" ) );
	mappings.insert(make_pair<int, string>( 2, "Two" ) );
	mappings.insert(make_pair<int, string>( 3, "Three" ) );
	mappings.insert(make_pair<int, string>( 4, "Four" ) );
	mappings.insert(make_pair<int, string>( 5, "Five" ) );
	mappings.insert(make_pair<int, string>( 6, "Six" ) );
	mappings.insert(make_pair<int, string>( 7, "Seven" ) );
	mappings.insert(make_pair<int, string>( 8, "Eight" ) );
	mappings.insert(make_pair<int, string>( 9, "Nine" ) );
	mappings.insert(make_pair<int, string>( 10, "Ten" ) );
	mappings.insert(make_pair<int, string>( 11, "Eleven" ) );
	mappings.insert(make_pair<int, string>( 12, "Tweleve" ) );
	mappings.insert(make_pair<int, string>( 13, "Thirteen" ) );
	mappings.insert(make_pair<int, string>( 14, "Fourteen" ) );
	mappings.insert(make_pair<int, string>( 15, "Fifteen" ) );
	mappings.insert(make_pair<int, string>( 16, "Sixteen" ) );
	mappings.insert(make_pair<int, string>( 17, "Seventeen" ) );
	mappings.insert(make_pair<int, string>( 18, "Eighteen" ) );
	mappings.insert(make_pair<int, string>( 19, "Nineteen" ) );
	mappings.insert(make_pair<int, string>( 20, "Twenty" ) );
	mappings.insert(make_pair<int, string>( 30, "Thirty" ) );
	mappings.insert(make_pair<int, string>( 40, "Fourty" ) );
	mappings.insert(make_pair<int, string>( 50, "Fifty" ) );
	mappings.insert(make_pair<int, string>( 60, "Sixety" ) );
	mappings.insert(make_pair<int, string>( 70, "Seventy" ) );
	mappings.insert(make_pair<int, string>( 80, "Eighty" ) );
	mappings.insert(make_pair<int, string>( 90, "Ninety" ) );
	mappings.insert(make_pair<int, string>( 100, "One Hundred" ) );
	mappings.insert(make_pair<int, string>( 200, "Two Hundred" ) );
	mappings.insert(make_pair<int, string>( 300, "Three Hundred" ) );
	mappings.insert(make_pair<int, string>( 400, "Four Hundred" ) );
	mappings.insert(make_pair<int, string>( 500, "Five Hundred" ) );
	mappings.insert(make_pair<int, string>( 600, "Six Hundred" ) );
	mappings.insert(make_pair<int, string>( 700, "Seven Hundred" ) );
	mappings.insert(make_pair<int, string>( 800, "Eight Hundred" ) );
	mappings.insert(make_pair<int, string>( 900, "Nine Hundred" ) );
	mappings.insert(make_pair<int, string>( 1000, "One Thousand" ) );
	mappings.insert(make_pair<int, string>( 2000, "Two Thousand" ) );
	mappings.insert(make_pair<int, string>( 3000, "Three Thousand" ) );
	mappings.insert(make_pair<int, string>( 4000, "Four Thousand" ) );
	mappings.insert(make_pair<int, string>( 5000, "Five Thousand" ) );
	mappings.insert(make_pair<int, string>( 6000, "Six Thousand" ) );
	mappings.insert(make_pair<int, string>( 7000, "Seven Thousand" ) );
	mappings.insert(make_pair<int, string>( 8000, "Eight Thousand" ) );
	mappings.insert(make_pair<int, string>( 9000, "Nine Thousand" ) );

	return mappings;
}

NumberWord::NumberWord()
{
}

// Routine to check if number is already mapped.
string NumberWord::isNumberInMap( string str )
{
	int number = 0;
	// Get the number from string.
	for ( int i = 0; i < str.length(); i++ )
		number = ( number * 10 ) + CHAR_TO_INT(str[i]);

	// Check if number is already mapped.
	map<int, string>::const_iterator iter;
	for ( iter = mappings.begin(); iter != mappings.end(); ++iter )
	{
		if ( iter->first == number )
			return iter->second;
	}
	return "";
}

string NumberWord::isNumberInMap( int number )
{
	map<int, string>::const_iterator iter;
	for ( iter = mappings.begin(); iter != mappings.end(); ++iter )
	{
		if ( iter->first == number )
			break;
	}
	return iter->second;
}