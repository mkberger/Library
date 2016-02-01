/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node headA, Node headB) {
    // Complete this function
    // Do not write the main method.
    //mkberger
    Node currA = new Node();
    Node currB = new Node();
    currA = headA; currB = headB;
    //check for null heads?
    while(currA != null)
    {
        while(currB != null)
        {
            if(currA == currB) return currA.data;
            currB = currB.next;
        }
        currA = currA.next;
        currB = headB;
    }
    return 0;
    //
}
