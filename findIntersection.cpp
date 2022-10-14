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
        if(headA == NULL || headB == NULL) return NULL;

        ListNode* first = headA;
        ListNode* sec = headB;


        while(first!=sec) {
             if(first == NULL) {
                  first = headB;

             }else {
                  
                  first = first->next;
             }

             if(sec == NULL) sec = headA;
             else sec = sec->next;
        }


        return first;
        
    }
};
