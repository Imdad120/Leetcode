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
       public  ListNode reverse(ListNode head){
            ListNode curr = head;
            ListNode prev = null;
            ListNode fwd = null;
            while(curr!=null){
                fwd = curr.next;
                curr.next = prev;
                prev = curr;
                curr= fwd;
        }
        return prev;
      }
      public void reorderList(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
            while(fast.next!=null && fast.next.next!=null){
                slow= slow.next;
                fast=fast.next.next;
            }
            ListNode head2 =slow.next;
            slow.next =null;
            head2 = reverse(head2);
            
            ListNode t1 =head;
            ListNode t2 = head2;
            while(t2 != null){

                ListNode next1 = t1.next;
                ListNode next2 = t2.next;

                t1.next = t2;
                t2.next = next1;

                t1 = next1;
                t2 = next2;
            }
    }
}