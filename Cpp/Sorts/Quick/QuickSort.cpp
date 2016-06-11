#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

template <typename T>
class QuickSort
{
private:
	vector<T> sequence;
public:
	void Exchange(int i, int j);
	int Partition(int p, int r);
	void Sort(int p, int r);
	void PrintSequence();
	int GetSize() { return sequence.size(); }
	void ClearSequence() { sequence.clear(); return; }
	void AddElement(T ele) { sequence.push_back(ele); return; }
};

template <typename T>
void QuickSort<T>::Exchange(int i, int j)
{
	T temp = sequence[i];
	sequence[i] = sequence[j];
	sequence[j] = temp;
	return;
}

template <typename T>
int QuickSort<T>::Partition(int p, int r)
{
	T x = sequence[r];
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (sequence[j] <= x)
		{
			i++;
			Exchange(i, j);
		}
	}
	Exchange((i + 1), r);
	return (i + 1);
}

template <typename T>
void QuickSort<T>::Sort(int p, int r)
{
	int q;
	if (p < r)
	{
		q = Partition(p, r);
		Sort(p, (q - 1));
		Sort((q + 1), r);
	}
	return;
}

template <typename T>
void QuickSort<T>::PrintSequence()
{
	for (auto x : sequence) cout << x << " ";
	cout << endl;
	return;
}

int main()
{
	// Opens input file, reads line by line
	string line, number;
	ifstream myfile;
	QuickSort<int> my_quick_sort;
	myfile.open("quick_sort_input.txt");
	while (getline(myfile, line)) {
		
		// Converts line of ints to vector sequence
		stringstream ss(line);
		while (ss >> number) my_quick_sort.AddElement(stoi(number));

		// Prints sequence as read from input file
		cout << "Sequence found in file :" << endl;
		my_quick_sort.PrintSequence();

		// Sorts sequence using Quick Sort and prints resulting sequence
		cout << "Sequence after Quick Sort is applied :" << endl;
		my_quick_sort.Sort(0, my_quick_sort.GetSize() - 1);
		my_quick_sort.PrintSequence();

		// Clears sequence
		my_quick_sort.ClearSequence();
	}
	return 0;
}
