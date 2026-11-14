class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* big = new ListNode(0);

        ListNode* temp = head;

        ListNode* temp1 = small;
        ListNode* temp2 = big;

        while (temp != nullptr) {
            if (temp->val < x) {
                temp1->next = temp;
                temp1 = temp1->next;
            } else {
                temp2->next = temp;
                temp2 = temp2->next;
            }
            temp = temp->next;
        }

        temp2->next = nullptr;
        temp1->next = big->next;
        return small->next;
    }
};