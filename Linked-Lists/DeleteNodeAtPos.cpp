/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    // mkberger
    Node* curr = new Node();
    Node* prev = new Node();
    curr = prev = head;
    int pos = 0;
    if (position == 0)
    {
        head = head->next;
        return head;
    }
    while(pos < position)
    {
        pos++;
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    return head;
    //
}
