#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

template <typename T>
void BubbleSort(vector<T>& sequence, unsigned int left, unsigned int right)
{
	unsigned int index, temp;
	bool sorted =  false;
	while (!sorted)
	{
		index = left;
		sorted = true;
		while(index < right)
		{
			if(sequence[index] > sequence [index+1])
			{
				temp = sequence[index];
				sequence[index] = sequence[index+1];
				sequence[index+1] = temp;
				sorted = false;
			}
			index++;
		}
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

	// Sorts sequence using bubble sort
	BubbleSort(sequence, 0, (sequence.size() - 1));

	// Prints sorted sequence
	for (auto x : sequence) cout << x << " ";
	cout << endl;

	return 0;
}
