#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

template <typename T>
void Merge(vector<T>& sequence, unsigned int left, unsigned int mid, unsigned	int right)
{
	
	unsigned int left_index, right_index, sorted_index, left_end, right_end;	
	vector<T> left_copy, right_copy;
	// fill copy vectors
	left_end = mid - left + 1;
	right_end = right - mid;
	for (unsigned int i = 0; i < left_end; i++) left_copy.push_back(sequence[left + i]);
	for (unsigned int i = 0; i < right_end; i++) right_copy.push_back(sequence[mid + 1 + i]);
	// merge copy vectors
	left_index = right_index = 0;
	sorted_index = left;
	while (left_index < left_end && right_index < right_end)
	{
		if (left_copy[left_index] <= right_copy[right_index])
		{
			sequence[sorted_index] = left_copy[left_index];
			left_index++;
		}
		else
		{
			sequence[sorted_index] = right_copy[right_index];
			right_index++;
		}
		sorted_index++;
	}
	// add any remaining on either copy vector
	while (left_index < left_end)
	{
		sequence[sorted_index] = left_copy[left_index];
		left_index++;
		sorted_index++;
	}
	while (right_index < right_end)
	{
		sequence[sorted_index] = right_copy[right_index];
		right_index++;
		sorted_index++;
	}
	
	return;
}

template <typename T>
void MergeSort(vector<T>& sequence, unsigned int left, unsigned	int right)
{
	
	unsigned int mid = (left + right) / 2;
	if (left < right)
	{
		MergeSort(sequence, left, mid);
		MergeSort(sequence, (mid + 1), right);
		Merge(sequence, left, mid, right);
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
	MergeSort(sequence, 0, (sequence.size() - 1));

	// Prints sorted sequence
	for (auto x : sequence) cout << x << " ";
	cout << endl;

	return 0;
}
