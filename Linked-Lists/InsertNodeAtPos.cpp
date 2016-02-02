/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    // mkberger
    Node* add = new Node(); add->data = data; add->next = nullptr;
    Node* curr = new Node(); curr = head;
    Node* prev = new Node(); prev = head;
    int pos = 0;
    if (position == 0 || curr == nullptr)
    {
        add->next = head;
        return add;
    }
    while(pos<position && curr->next != nullptr)
    {
        prev = curr;
        curr = curr->next;
        pos++;
    }
    prev->next = add;
    add->next = curr;
    return head;
    //
}
