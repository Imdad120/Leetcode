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
    static ListNode reverse(ListNode head){
        ListNode curr = head;
        ListNode prev  =null;
        ListNode fwd = null;
        while(curr!=null){
           fwd = curr.next;
           curr.next = prev;
           prev = curr;
           curr = fwd;
        }
        return prev;
    }
    public int pairSum(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        while(fast.next != null && fast.next.next!=null){
            slow = slow.next;
            fast=fast.next.next;
        }
        ListNode head2 =slow.next;
        slow.next = null;
        head2 = reverse(head2);
       ListNode t1 = head;
       ListNode t2 = head2;
       int max  = 0;
       while(t1 != null && t2!= null){
          int sum = t1.val + t2.val;
          max = Math.max(max , sum);
          t1 = t1.next;
          t2=t2.next;
       }
       return max ;
    }
}