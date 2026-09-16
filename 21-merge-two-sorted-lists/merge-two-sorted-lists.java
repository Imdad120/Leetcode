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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode dummy = new ListNode(-1);
        ListNode d = dummy;
        ListNode i = list1;
        ListNode j = list2;
        while(i!=null && j !=null){
        if(i.val<=j.val){
            d.next = i;
            i = i.next;
        }
        else{
            d.next = j;
            j= j.next;
        }
        d=d.next;
        }
        if(i==null) d.next = j;
        else d.next = i;
        return dummy.next;
    }
}