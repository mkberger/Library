#include <vector>
/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    // mkberger
    vector<int> arr;
    while(head!= nullptr)
    {
        arr.push_back(head->data);
        head = head->next;
    }
    for(int i = arr.size()-1; i >= 0; i--)
    {
        cout << arr[i] << endl;    
    }
    //
}
