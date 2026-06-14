class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
     ListNode* curr = head;
     ListNode* temp = NULL;
      while(curr) {
    temp = curr->prev;
    curr->prev = curr->next;
    curr->next = temp;
        
    curr = curr->prev;
  }
  if(temp)
      head = temp->prev;
      
return head;

};
