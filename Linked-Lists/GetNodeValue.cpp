#include <vector>
/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    // mkberger
        vector<int> data_vector;
        while(head != nullptr)
        {
            data_vector.push_back(head->data);
            head = head->next;
        }
        return data_vector[data_vector.size()-1-positionFromTail];
    //
}
