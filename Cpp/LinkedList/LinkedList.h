template <typename T>
class Node
{
public:
	T data;
	Node<T>* next;
	Node<T>* prev;
	// default constructor
	Node<T>();
	// assignment constructor
	Node<T>(T data, Node* prev, Node* next);
};

template <typename T>
class LinkedList
{
	Node<T> * head = nullptr;
	int size = 0;
public:	
	int getSize();
	Node<T> * getHead();
	void addNode(T data);
	void addNode(T data, int n);
	void deleteNode();
	void deleteNode(int n);
	void printList();
	bool checkEquivalence(LinkedList<T> * other);
	void reverseList();
	LinkedList<T> & operator=(const LinkedList<T> &rhs);
};
