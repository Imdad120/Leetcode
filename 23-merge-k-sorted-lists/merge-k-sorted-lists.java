class Solution {
    public ListNode mergeKLists(ListNode[] lists) {

        if (lists.length == 0) return null;

        ArrayList<ListNode> arr1 = new ArrayList<>();
        ArrayList<ListNode> arr2 = new ArrayList<>();

        for (ListNode node : lists) {
            arr1.add(node);
        }

        while (arr1.size() > 1) {

            while (arr1.size() > 1) {

                ListNode a = arr1.remove(arr1.size() - 1);
                ListNode b = arr1.remove(arr1.size() - 1);

                ListNode c = merge(a, b);

                arr2.add(c);
            }

            // agar ek list bach gayi
            if (arr1.size() == 1) {
                arr2.add(arr1.remove(0));
            }

            // next round
            arr1.addAll(arr2);
            arr2.clear();
        }

        return arr1.get(0);
    }

    ListNode merge(ListNode head1, ListNode head2) {

        ListNode i = head1;
        ListNode j = head2;

        ListNode dummy = new ListNode(-1);
        ListNode k = dummy;

        while (i != null && j != null) {

            if (i.val <= j.val) {
                k.next = i;
                i = i.next;
            } else {
                k.next = j;
                j = j.next;
            }

            k = k.next;
        }

        if (i != null) {
            k.next = i;
        } else {
            k.next = j;
        }

        return dummy.next;
    }
}