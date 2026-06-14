#include <iostream>
using namespace std;
class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int x) {
        data = x;
        next = NULL;
    }
};
ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    head = reverseList(head);
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}