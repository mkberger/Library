#include "Strings.h"

int main()
{
	// create Strings object
	Strings my_string;

	// set Strings.test_string
	string test_string = "ABC AAB";
	my_string.setString(test_string);
	cout << "test_string has been changed to : " << my_string.getString() << endl;

	// reverse words in test_string 
	my_string.reverseWords();
	cout << "Reversed words in string : " << my_string.getString() << endl;

	// reverse test_string;
	my_string.reverseString(my_string.getString(), true);
	cout << "Reversed string : " << my_string.getString() << endl;

	// strip white space
	my_string.stripWhiteSpace();
	cout << "White space stripped : " << my_string.getString() << endl;

	// remove sequential duplicates
	my_string.removeSequentialDuplicates();
	cout << "Sequential duplicates removed : " << my_string.getString() << endl;

	// find first non-repeating char
	cout << "Firs non-repeating char : " << my_string.findFirstNonRepeatingChar() << endl;

	/*
		Notes :
				In unicode, each character is 2 bytes. A char lookup table should be expanded from 256 to 256^2 = 65536 elements
				You would need to use wide char types and string functions
				Walking through a string & catching memory exceptions can guard against being passed invalid string pointers or non-null-terminated strings
	*/

	return 0;
}
