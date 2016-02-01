/*
  Detect cycle in the list
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
int HasCycle(Node head) {
// mkberger
    Node tortoise = head;
    Node hare = head;
    int tortoise_position, hare_position;
    tortoise_position = hare_position = 0;
    if(head == null) return 0;
    while(true)
    {
        tortoise = tortoise.next;
        hare = hare.next;
        if (hare == null) return 0;
        hare = hare.next;
        if (hare == null) return 0;
        if(hare == tortoise) return 1;
    }
//
}
