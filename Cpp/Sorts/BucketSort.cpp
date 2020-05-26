#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>
#include <limits.h>
#include <algorithm>

using namespace std;

int main()
{
	string sequence_string, buffer;
	vector<int> sequence;
	int n, max_val, min_val;
	double interval, num_buckets;
	max_val = INT_MIN;
	min_val = INT_MAX;
	// Retrieves sequence from user keyboard input
	cout << "Enter in a sequence of integers separated by spaces, ex. \"1 2 1 3 1 5\"" << endl;
	getline(cin, sequence_string);
	stringstream ss(sequence_string);

	// Stores sequence in vector of integers
	while (ss >> buffer)
	{
		int temp_int = stoi(buffer);
		if (temp_int < min_val) min_val = temp_int;
		if (temp_int > max_val) max_val = temp_int;
		sequence.push_back(stoi(buffer));
	}

	// Determine # buckets & bucket interval sizes
	n = sequence.size();
	num_buckets = sqrt(n) + 1;
	interval = (max_val-min_val) / num_buckets;

	// Initialize & populate 2d vector
	vector<int> bucket;
	vector<vector<int>> buckets(num_buckets+1, bucket);
	for(auto x : sequence) buckets[(x-min_val)/interval].push_back(x);

	// Sort each bucket then concatenate
	int temp_index = 0;
	for(auto x : buckets)
	{
		sort(x.begin(), x.end());
		for(auto y : x) sequence[temp_index++] = y;
	}

	// Prints sorted sequence
	for (auto x : sequence) cout << x << " ";
	cout << endl;
	return 0;
}
