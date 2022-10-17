/*
Remove Linked List Elements
*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head or (!head->next and head->val==val)) return nullptr;
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* temp = dummy;
        ListNode* curr = head;
        
           while(curr)
           {
               if(curr->val==val) temp->next = curr->next;
               else temp=curr; 
               curr=curr->next;
           }
           
           return dummy->next;
    }
};
