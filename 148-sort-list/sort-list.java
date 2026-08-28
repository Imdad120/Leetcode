class Solution {

    public ListNode sortList(ListNode head) {

        // Base condition
        if (head == null || head.next == null) {
            return head;
        }

        // Find middle
        ListNode slow = head;
        ListNode fast = head.next;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        // Split the list
        ListNode right = slow.next;
        slow.next = null;

        // Sort left part
        ListNode left = sortList(head);

        // Sort right part
        ListNode sortedRight = sortList(right);

        // Merge both parts
        return merge(left, sortedRight);
    }

    public ListNode merge(ListNode list1, ListNode list2) {

        ListNode dummy = new ListNode(0);
        ListNode current = dummy;

        while (list1 != null && list2 != null) {

            if (list1.val <= list2.val) {
                current.next = list1;
                list1 = list1.next;
            } 
            else {
                current.next = list2;
                list2 = list2.next;
            }

            current = current.next;
        }

        // Remaining nodes
        if (list1 != null) {
            current.next = list1;
        } 
        else {
            current.next = list2;
        }

        return dummy.next;
    }
}