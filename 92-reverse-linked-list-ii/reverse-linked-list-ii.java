class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {

        ListNode dummy = new ListNode(0);
        dummy.next = head;

        ListNode temp = dummy;

        for(int i = 1; i <= left - 1; i++) {
            temp = temp.next;
        }

        ListNode l = temp.next;

        ListNode t2 = head;

        for(int i = 1; i <= right - 1; i++) {
            t2 = t2.next;
        }

        ListNode r = t2.next;

        t2.next = null;
        temp.next = null;

        ListNode curr = l;
        ListNode prev = null;
        ListNode fwd = null;

        while(curr != null) {
            fwd = curr.next;
            curr.next = prev;
            prev = curr;
            curr = fwd;
        }

        temp.next = prev;
        l.next = r;

        return dummy.next;
    }
}