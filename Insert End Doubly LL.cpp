#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertEnd(Node*& head,int x) {
   Node* node = new Node(x);
    if(head == NULL) {
         head = node;
         return;
  }
   Node* temp = head;
    while(temp->next)
   temp = temp->next;
   temp->next = node;
   node->prev = temp;
}
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL; 
    insertEnd(head, 10);
    printList(head);
    insertEnd(head, 20);
    printList(head);
    insertEnd(head, 30);
    printList(head);

    return 0;
}
