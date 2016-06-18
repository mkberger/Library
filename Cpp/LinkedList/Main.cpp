#include "LinkedList.cpp"
using namespace std;

int main()
{
	// create empty lists
	LinkedList<int> list, other_list;

	// add nodes to end
	list.addNode(1);	
	list.addNode(10);
	list.addNode(100); 

	// adds node at head w value 0
	list.addNode(0, 0);
	
	// add nodes at positions 3 & 2 w values 50 & 5
	list.addNode(50, 3);
	list.addNode(5, 2);

	// delete node at end
	list.deleteNode();

	// delete head node
	list.deleteNode(0);

	// delete node as position 1
	list.deleteNode(1);

	// copies list into other_list with overridden equals operator
	other_list = list;

	// check equivalence (true)
	cout << "List : ";
	list.printList();
	cout << "Other List : ";
	other_list.printList();
	bool equivalent = list.checkEquivalence(&other_list);
	cout << "Equivalence : " << (equivalent ? "True" : "False") << endl;

	// reverse list
	list.reverseList();

	// check equivalence (false)
	cout << "List : ";
	list.printList();
	cout << "Other List : ";
	other_list.printList();
	equivalent = list.checkEquivalence(&other_list);
	cout << "Equivalence : " << (equivalent ? "True" : "False" ) << endl;

	return 0;
}
