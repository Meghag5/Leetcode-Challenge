//https://leetcode.com/explore/challenge/card/march-leetcoding-challenge-2021/588/week-1-march-1st-march-7th/3660/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;     

        while(temp1 != NULL){
            temp2 = headB;
            while(temp2 != NULL){
                if(temp1 == temp2 && temp1->val == temp2->val && temp1->next == temp2->next){
                    return temp1;
                }
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
        }
        
        return NULL;
    }
};
