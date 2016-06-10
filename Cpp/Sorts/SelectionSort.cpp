#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

template <typename T>
void InsertionSort(vector<T>& sequence)
{
	T temp, key;
	int key_index;
	for (unsigned int i = 0; i < sequence.size(); i++)
	{
		key_index = i;
		key = sequence[i];
		for (unsigned int j = i; j < sequence.size(); j++)
		{
			if (sequence[j] < key)
			{
				key = sequence[j];
				key_index = j;
			}
		}
		temp = sequence[i];
		sequence[i] = key;
		sequence[key_index] = temp;
	}
	return;
}

int main()
{
	string sequence_string, buffer;
	vector<int> sequence;
	
	// Retrieves sequence from user keyboard input
	cout << "Enter in a sequence of integers separated by spaces, ex. \"1 2 1 3 1 5\"" << endl;
	getline(cin, sequence_string);
	stringstream ss(sequence_string);

	// Stores sequence in vector of integers
	while (ss >> buffer) sequence.push_back(stoi(buffer));

	// Sorts sequence using insertion sort
	InsertionSort(sequence);

	// Prints results
	for (auto x : sequence) cout << x << " ";
	cout << endl;

	return 0;
}
