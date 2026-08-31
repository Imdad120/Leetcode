class Solution {
    public int[] nodesBetweenCriticalPoints(ListNode head) {

        int[] ans = {-1, -1};

        ListNode prev = head;
        ListNode curr = head.next;

        int index = 1;

        int first = -1;
        int last = -1;

        int min = Integer.MAX_VALUE;

        while (curr.next != null) {

            // Check if curr is a critical point
            if ((curr.val > prev.val && curr.val > curr.next.val) ||
                (curr.val < prev.val && curr.val < curr.next.val)) {

                // First critical point
                if (first == -1) {
                    first = index;
                } 
                else {
                    // Distance from previous critical point
                    min = Math.min(min, index - last);
                }

                // Update last critical point
                last = index;
            }

            prev = curr;
            curr = curr.next;
            index++;
        }

        // Less than 2 critical points
        if (first == -1 || first == last) {
            return ans;
        }

        int max = last - first;

        ans[0] = min;
        ans[1] = max;

        return ans;
    }
}