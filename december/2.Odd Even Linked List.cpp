//https://leetcode.com/problems/odd-even-linked-list/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* even = head;
        ListNode* odd = head->next;
        ListNode* res = odd;

        while(odd != NULL && odd->next != nullptr){
            even->next = odd->next;
            even = even->next;
            odd->next = even->next;
            odd = odd->next;
        }
        
        even->next = res;
  
        return head;
    }
};