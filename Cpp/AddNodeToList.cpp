/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    // mkberger
    Node* curr = new Node();
    Node* add = new Node();
    add->data = data;
    add->next = nullptr;
    curr = head;
    if(head==nullptr) return add;
    while(curr->next != nullptr) curr = curr->next;
    curr->next = add;
    return head;
    //
}
