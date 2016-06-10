#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

void InsertionSort(vector<int>& sequence)
{
	int key;
	for (int i = 1; i < sequence.size(); i++)
	{
		key = sequence[i];
		int j = i - 1;
		while ((j >= 0) && (sequence[j] > key))
		{
			sequence[j + 1] = sequence[j];
			j--;
		}
		sequence[j + 1] = key;
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
