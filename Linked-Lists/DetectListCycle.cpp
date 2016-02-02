/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   // Complete this function
   // Do not write the main method
// mkberger
    Node* tortoise = new Node();
    Node* hare = new Node();
    tortoise = hare = head;
    if(head == nullptr) return 0;
    while(true)
    {
        tortoise = tortoise->next;
        hare = hare->next;
        if(hare == nullptr) return 0;
        hare = hare->next;
        if(hare == nullptr) return 0;
        if(tortoise == hare) return 1;
    }
//
}
