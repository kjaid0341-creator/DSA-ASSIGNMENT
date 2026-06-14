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

void insertFront(Node*& head,int x)
{
Node* node = new Node(x);
node->next = head;
if(head)
head->prev = node;
head = node;
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
    insertFront(head, 10);
    printList(head);
    insertFront(head, 20);
    printList(head);
    insertFront(head, 30);
    printList(head);
    insertFront(head, 40);
    printList(head);

    return 0;
}
