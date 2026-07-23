/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode*cur =  head;
        while (cur!= NULL && cur-> next!= NULL){
            ListNode* first = cur;
            ListNode* second = cur->next;
            int t = first->val;
            first->val = second-> val;
            second->val = t;
            cur = second->next;
        }
        return head;
        
    }
};