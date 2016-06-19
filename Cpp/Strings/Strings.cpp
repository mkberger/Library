#include "Strings.h"

Strings::Strings()
{
}

Strings::~Strings()
{
}

// sets string s
void Strings::setString(string &s)
{
	this->s = *(&s);
	return;
}

// reverses words in s
void Strings::reverseWords()
{
	string new_s;
	istringstream iss(this->s);
	do
	{
		string word;
		iss >> word;
		reverseString(word, false);
		new_s += word + " ";
	} while (iss);
	new_s.erase(new_s.end()-2, new_s.end());
	this->s = new_s;
	return;
}

// reverses string
void Strings::reverseString(string &w, bool flag)
{
	int length = w.length();
	int c;
	for (int i = 0, j = length - 1; i < j; i++, j--)
	{
		c = w[i];
		w[i] = w[j];
		w[j] = c;
	}
	if (flag) this->s = w;
	return;
}

// gets string
string Strings::getString()
{
	return this->s;
}

// strips string of whitespace
void Strings::stripWhiteSpace()
{
	string new_s;
	istringstream iss(this->s);
	do
	{
		string word;
		iss >> word;
		new_s += word;
	} while (iss);
	this->s = new_s;
	return;
}

// removes duplicate characters that are in sequence
void Strings::removeSequentialDuplicates()
{
	string new_s;
	char compare = '\0';
	for (auto c : this->s)
	{
		if (c != compare) new_s += c;
		compare = c;
	}
	this->s = new_s;
	return;
}

// finds the first non-repeating character
char Strings::findFirstNonRepeatingChar()
{
	char first;
	map<char, bool> char_map;
	for (auto c : this -> s)
	{
		if (char_map.find(c) == char_map.end()) char_map.insert(pair<char,bool>(c, true));
		else char_map[c] = false;
	}
	for (auto c : this->s)
	{
		if (char_map[c]) return c;
	}
}
