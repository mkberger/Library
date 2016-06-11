#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>
#include <limits>

using namespace std;

template <typename T>
class Heap
{
public:
	int size;
	vector<T> tree;
	void BuildMaxHeap();
	void MaxHeapify(int i);
	void Sort();
	void MaxHeapInsert(T key);
	T HeapExtractMax();
	void HeapIncreaseKey(int i, T key);
	void PrintTree() { for (auto x : tree) cout << x << " "; cout << endl; }
	int Left(int i) { return (2 * i + 1); }						//make this inline
	int Right(int i) { return (2 * i + 2); }					//make this inline
	int Parent(int i) { return ((i - 1) / 2); }					//make this inline
	int HeapHeight() { return (log(tree.size()) / log(2)); }	//make this inline
	T HeapMaximum() { return tree[0]; }							//make this inline
};

template <typename T>
void Heap<T>::Sort()
{
	BuildMaxHeap();
	for (int i = size - 1; i > 0; i--)
	{
		T temp = tree[0];										//write a swap(int i, int j) function
		tree[0] = tree[i];
		tree[i] = temp;
		size--;
		MaxHeapify(0);
	}
	return;
}

template <typename T>
T Heap<T>::HeapExtractMax()
{
	if (size < 1)
	{
		cout << "error: heap underflow" << endl;
		return numeric_limits<T>::min();
	}
	T max = HeapMaximum();
	tree[0] = tree[--size];
	tree.erase(tree.end() - 1);
	MaxHeapify(0);
	return max;
}

template <typename T>
void Heap<T>::HeapIncreaseKey(int i, T key)
{
	if (key >= tree[i])
	{
		tree[i] = key;
		while (i > 0 && tree[Parent(i)] < tree[i])
		{
			T temp = tree[Parent(i)];
			tree[Parent(i)] = tree[i];
			tree[i] = temp;
			i = Parent(i);

		}
	}
	return;
}

template <typename T>
void Heap<T>::MaxHeapInsert(T key)
{
	tree.push_back(key);
	HeapIncreaseKey(size++, key);
	return;
}

template <typename T>
void Heap<T>::MaxHeapify(int i)
{
	int largest;
	int left = Left(i);
	int right = Right(i);
	if (left < size && tree[left] > tree[i]) largest = left;
	else largest = i;
	if (right < size && tree[right] > tree[largest]) largest = right;
	if (largest != i)
	{
		T temp = tree[i];
		tree[i] = tree[largest];
		tree[largest]  = temp;
		MaxHeapify(largest);
	}
	return;
}

template <typename T>
void Heap<T>::BuildMaxHeap()
{	 
	size = tree.size();
	for (int i = ((size - 1) / 2); i >= 0; i--) MaxHeapify(i);
	return; 
}

int main()
{
	string sequence_string, buffer;
	vector<int> sequence;
	Heap<int> my_heap;
	// Retrieves sequence from user keyboard input
	cout << "Enter in a sequence of integers separated by spaces, ex. \"1 2 1 3 1 5\"" << endl;
	getline(cin, sequence_string);
	stringstream ss(sequence_string);

	// Populates heap tree
	while (ss >> buffer) my_heap.tree.push_back(stoi(buffer));

	// Builds and prints max heap
	my_heap.BuildMaxHeap();
	cout << "Heap properties maintained: " << endl;
	my_heap.PrintTree();

	// Inserts 100 into heap and prints updated state
	my_heap.MaxHeapInsert(100);
	cout << "Inserted 100: " << endl;
	my_heap.PrintTree();

	//Extract max value from heap and prints updated state
	int max = my_heap.HeapExtractMax();
	cout << "Extracted max value: " << endl;
	my_heap.PrintTree();

	// Sort sequence with Heap Sort
	my_heap.Sort();
	cout << "Sorted Sequence: " << endl;
	my_heap.PrintTree();

	return 0;
}
