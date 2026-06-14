class Node
{
  public:
    int data;
    Node* prev;
    Node* next;

    Node(int x) {
    data = x;
    prev = NULL;
    next = NULL;
   }
};
