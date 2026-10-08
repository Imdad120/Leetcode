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
    ListNode* doubleIt(ListNode* head) {
        stack<int>st;
        ListNode*temp=head;
        while(temp!=nullptr)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        int c=0;
       ListNode* dummy = nullptr;
       
        while(!st.empty())
        {
            int val=st.top();
            st.pop();
            val=val*2+c;
            c=val/10;
            val=val%10;
            
            ListNode*cute=new ListNode(val);
            cute->next=dummy;
            dummy=cute;

        }
        if(c>0)
        {
               ListNode*cute=new ListNode(c);
            cute->next=dummy;
            dummy=cute;
        }

        return dummy;
        
    }
};