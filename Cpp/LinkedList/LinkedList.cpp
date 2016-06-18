#include "LinkedList.h" 
#include <limits.h>
#include <iostream>
#include <stdlib.h>  

// node default constructor
template <typename T>
Node<T>::Node()
{
	this->data = numeric_limits<T>::min();
	this->prev = nullptr;
	this->next = nullptr;
}

// node assign constructor
template <typename T>
Node<T>::Node(T data, Node<T>* prev, Node<T>* next)
{
	this->data = data;
	this->prev = prev;
	this->next = next;
}

// returns the number of elements in the list
template <typename T>
int LinkedList<T>::getSize()
{
	return size;
};

// returns a pointer to the head of the list
template <typename T>
Node<T> * LinkedList<T>::getHead()
{
	return head;
};

// adds a node at the end of the list
template <typename T>
void LinkedList<T>::addNode(T data)
{
	addNode(data, size);
};

// adds a node at the nth position
template <typename T>
void LinkedList<T>::addNode(T data, int n)
{
	if (n < 0 || n > size) exit(EXIT_FAILURE);
	int index = 0;
	Node<T> * curr = new Node<T>();
	Node<T> * add = new Node<T>(data, nullptr, nullptr);
	curr = head;
	if (n == 0)
	{
		head = add;
		head->next = curr;
		if (curr != nullptr) head->next->prev = head;
	}
	else if(n == size)
	{
		while (curr->next != nullptr) curr = curr->next;
		curr->next = add;
		add->prev = curr;
	}
	else
	{
		while (index++ < n && curr->next != nullptr) curr = curr->next;
		curr->prev->next = add;
		add->prev = curr->prev;
		add->next = curr;
		curr->prev = add;
	}
	size++;
	return;
};

// deletes node at end of list
template <typename T>
void LinkedList<T>::deleteNode()
{
	deleteNode(size);
	return;
}

// deletes node at position n
template <typename T>
void LinkedList<T>::deleteNode(int n)
{
	if (n < 0 || n > size) exit(EXIT_FAILURE);
	int index = 0;
	Node<T> * curr = new Node<T>();
	curr = head;
	if (n == 0)
	{
		head = head->next;
	}
	else if (n == size)
	{
		while (curr->next != nullptr) curr = curr->next;
		curr->prev->next = nullptr;
	}
	else
	{
		while (index++ < n && curr->next != nullptr) curr = curr->next;
		curr->prev->next = curr->next;
		curr->next->prev = curr->prev;
	}
	size--;
	return;
}

// prints the contents of the list
template <typename T>
void LinkedList<T>::printList()
{
	Node<T> * temp = head;
	cout << "nullptr <-> ";
	while (temp != nullptr)
	{
		cout << temp->data << " <-> ";
		temp = temp->next;
	}
	cout << "nullptr\n";
	return;
};

// checks to see if list is equivalent to other list
template <typename T>
bool LinkedList<T>::checkEquivalence(LinkedList<T> * other)
{
	Node<T> * headA = this->head;
	Node<T> * headB = new Node<T>();
	headB = other->getHead();
	while (headA != nullptr && headB != nullptr)
	{
		if (headA->data != headB->data) return 0;
		headA = headA->next;
		headB = headB->next;
	}
	if (headA != nullptr || headB != nullptr) return 0;
	while (headA != nullptr && headB != nullptr)
	{
		if (headA->data != headB->data) return 0;
		headA = headA->prev;
		headB = headB->prev;
	}
	if (headA != nullptr || headB != nullptr) return 0;
	return 1;
}

// reverses the list
template <typename T>
void LinkedList<T>::reverseList()
{
	Node<T> * next = new Node<T>();
	Node<T> * prev = new Node<T>();
	Node<T> * curr = new Node<T>();
	curr = head;
	prev = nullptr;
	while (curr != nullptr)
	{
		next = curr->next;
		curr->next = prev;
		curr->prev = next;
		prev = curr;
		curr = next;
	}
	head = prev;
	return;
}

// overridden equals operator
template <typename T>
LinkedList<T> & LinkedList<T>::operator=(const LinkedList<T> &rhs)
{
	Node<T> *temp = new Node<T>();
	temp = rhs.head;
	while (temp != nullptr)
	{
		this->addNode(temp->data);
		temp = temp->next;
	}
	return *this;
}
