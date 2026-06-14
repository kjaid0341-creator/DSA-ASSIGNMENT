#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void deleteNode(Node* node) {
   if(node == NULL)
     return;
    if(node->prev)
     node->prev->next = node->next;
       if(node->next)
         node->next->prev = node->prev;
      delete node;
}
int main(){
    Node* head;

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);

    head = first;
    head -> next = second;
    head -> next -> next = third;
    head -> next -> next -> next = forth;
    head -> next -> next -> next -> next = fifth;
  

    Node* temp = head;
    while(temp !=NULL){
        cout<<temp -> data <<" ";
        temp =temp -> next;
        cout<<endl;
    }
     deletePosition(head,30);
    return 0;
}
