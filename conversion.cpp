#include "NumberWordLength4.h"

int main()
{
	NumberWord* nWord;
	string str;

	while ( true )
	{
		cout << "Enter the word." << endl;
		cin >> str;

		switch( str.length() )
		{
		case 1:
		case 2:
			nWord = new NumberWordLength2();
			cout << nWord->getWordForNumber( str ) << endl;
			break;
		case 3:
			nWord = new NumberWordLength3();
			cout << nWord->getWordForNumber( str ) << endl;
			break;
		case 4:
			nWord = new NumberWordLength4();
			cout << nWord->getWordForNumber( str ) << endl;
			break;
		default:
			cout << "Sorry number of " << str.length() << " digits"
				" are currently not supported" << endl;
		}
	}

	system("pause");
	return 0;
}