/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int length = 0;
        ListNode temp = head;

        // Find length
        while (temp != null) {
            length++;
            temp = temp.next;
        }

        // If we need to remove the head
        if (n == length) {
            return head.next;
        }

        // Go to node BEFORE the node we want to delete
        temp = head;
        for(int i = 1 ; i < length-n; i++){
            temp = temp.next;
           
        }
         temp.next = temp.next.next;
        return head;
    }
}