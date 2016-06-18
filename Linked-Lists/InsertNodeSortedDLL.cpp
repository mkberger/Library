/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // mkberger
    Node* add = new Node();
    add->data = data;
    add->next = nullptr;
    add->prev = nullptr;
    if(head == nullptr) return add;
    
    Node* prev = new Node();
    Node* curr = new Node();
    prev = curr = head;
    
    while(curr != nullptr && curr->data <= data)
    {
        prev = curr;
        curr = curr->next;
    }
    if(curr == nullptr)
    {
        prev->next = add;
        add->prev = prev;
        return head;
    }
    else if(prev == curr)
    {
        add->next = prev;
        prev->prev = add;
        return add;
    }
    else
    {
        add->prev = prev;
        add->next = curr;
        curr->prev = add;
        prev->next = add;
        return head;
    }
    //
}
