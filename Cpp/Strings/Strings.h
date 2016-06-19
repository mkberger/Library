#include <string>
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

class Strings
{
	string s;
public:
	Strings();
	~Strings();
	void setString(string& s);
	void reverseWords();
	void reverseString(string &s, bool flag);
	string getString();
	void stripWhiteSpace();
	void removeSequentialDuplicates();
	char findFirstNonRepeatingChar();
};
