/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    // mkberger
    Node* curr = new Node();
    Node* headC = new Node();
    curr = headC = nullptr;
    while(headA != nullptr || headB != nullptr)
    {
        if(headA == nullptr || (headB != nullptr && headB->data < headA->data))
        {
            if(headC == nullptr)
            {
                headC = headB;
                curr = headC;
            }
            else
            {
                curr->next = headB;
                curr = headB;
            }
            headB = headB->next;
        }
        else if(headB == nullptr || (headA != nullptr && headA->data < headB->data))
        {
            if(headC == nullptr)
            {
                headC = headA;
                curr = headC;
            }
            else
            {
                curr->next = headA;
                curr = headA;
            }
            headA = headA->next;
        }
    }
    return headC;
    //
}
