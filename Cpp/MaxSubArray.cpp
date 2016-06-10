#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <tuple>
#include <limits>
using namespace std;

template <typename T>
struct SubArray
{
	int low;
	int high;
	T sum;
	SubArray() : low(0), high(0), sum(0) {}
	SubArray(int low, int high, T sum) : low(low), high(high), sum(sum) {}
};

template <typename T>
SubArray<T> FindMaxCrossingSubArray(vector<T>& sequence, unsigned int low, unsigned int mid, unsigned int high)
{
	// walks down from mid to left, and up from mid to right, to find the maximum subarray between low & high
	// that contains the middle element
	unsigned int max_left = mid;
	unsigned int max_right = mid;
	T temp_sum = 0;
	T left_sum = numeric_limits<T>::min();
	T right_sum = numeric_limits<T>::min();
	for (unsigned int i = low; i <= mid; i++)
	{
		temp_sum += sequence[mid - i];
		if (temp_sum > left_sum)
		{
			left_sum = temp_sum;
			max_left = mid - i;
		}
	}
	temp_sum = 0;
	for (unsigned int i = (mid + 1); i <= high; i++)
	{
		temp_sum += sequence[i];
		if (temp_sum > right_sum)
		{
			right_sum = temp_sum;
			max_right = i;
		}
	}
	return SubArray<T>(max_left, max_right, (left_sum + right_sum));
}

template <typename T>
SubArray<T> FindMaxSubArray(vector<T>& sequence, unsigned int low, unsigned int high)
{
	// maximum subarray must (1) exist completely within the left subarray, (2) exist completely within th right subarray,
	// or (3) span parts of the left and right subarrays, crossing over mid
	if (low == high) return SubArray<T>(low, high, sequence[low]);
	else
	{
		unsigned int mid = (low + high) / 2;
		SubArray<T> left_sub_array, right_sub_array, cross_sub_array;
		left_sub_array = FindMaxSubArray(sequence, low, mid);
		right_sub_array = FindMaxSubArray(sequence, (mid + 1), high);
		cross_sub_array = FindMaxCrossingSubArray(sequence, low, mid, high);
		if (left_sub_array.sum >= right_sub_array.sum && left_sub_array.sum >= cross_sub_array.sum) return left_sub_array;
		else if (right_sub_array.sum >= left_sub_array.sum && right_sub_array.sum >= cross_sub_array.sum) return right_sub_array;
		else return cross_sub_array;
	}
}

int main()
{
	string sequence_string, buffer;
	vector<int> sequence; 
	SubArray<int> max_sub_array;
	// Retrieves sequence from user keyboard input
	cout << "Enter in a sequence of integers separated by spaces, ex. \"1 2 1 3 1 5\"" << endl;
	getline(cin, sequence_string);
	stringstream ss(sequence_string);

	// Stores sequence in vector of integers
	while (ss >> buffer) sequence.push_back(stoi(buffer));

	// Sorts sequence using insertion sort
	max_sub_array = FindMaxSubArray(sequence, 0, (sequence.size() - 1));

	// Prints max crossing subarray
	for (auto x : sequence) cout << x << " ";
	cout << endl << "Maximum subarray ranges from indeces " << max_sub_array.low << " to " << max_sub_array.high << " summing to " << max_sub_array.sum << endl;

	return 0;
}
