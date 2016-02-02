*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // mkberger
    Node* next = new Node();
    Node* prev = new Node();
    Node* curr = new Node();
    curr = head; prev = nullptr;
    while(curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        curr->prev = next;
        prev = curr;
        curr = next;
    }
    return prev;
    //
}
