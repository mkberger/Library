/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    // mkberger
    Node* curr = new Node();
    Node* prev = new Node();
    curr = prev = head;
    if(head == nullptr) return head;
    int prev_data = prev->data;
    curr = prev->next;
    while(curr != nullptr)
    {
        if(prev_data == curr->data)
        {
            prev->next = curr->next;    
        }
        else
        {
            prev = curr;
            prev_data = prev->data;
        }
        curr = curr->next;
    }
    return head;
    //
}
