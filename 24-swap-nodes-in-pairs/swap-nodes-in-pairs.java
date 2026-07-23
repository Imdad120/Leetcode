/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    public ListNode swapPairs(ListNode head) {
        // Base case
        if (head == null || head.next == null) {
            return head;
        }

        // First two nodes
        ListNode first = head;
        ListNode second = head.next;

        // Recursively swap the remaining list
        first.next = swapPairs(second.next);

        // Swap the first two nodes
        second.next = first;

        // Return new head
        return second;
    }
}