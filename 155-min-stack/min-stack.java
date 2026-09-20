class MinStack {

    class Node {
        int val;
        int min;
        Node next;

        Node(int val, int min) {
            this.val = val;
            this.min = min;
        }
    }

    Node head;

    public MinStack() {
        head = null;
    }

    public void push(int value) {
        if (head == null) {
            head = new Node(value, value);
        } else {
            int min = Math.min(value, head.min);

            Node temp = new Node(value, min);
            temp.next = head;
            head = temp;
        }
    }

    public void pop() {
        if (head == null) return;

        head = head.next;
    }

    public int top() {
        if (head == null) return -1;

        return head.val;
    }

    public int getMin() {
        if (head == null) return -1;

        return head.min;
    }
}