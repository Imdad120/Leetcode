import java.util.*;

class Solution {
    public int countStudents(int[] students, int[] sandwiches) {

        Queue<Integer> queue = new LinkedList<>();
        Stack<Integer> stack = new Stack<>();

        // Students ko queue me daalo
        for (int student : students) {
            queue.add(student);
        }

        // Sandwiches ko reverse order me stack me daalo
        for (int i = sandwiches.length - 1; i >= 0; i--) {
            stack.push(sandwiches[i]);
        }

        int rotate = 0;

        while (!queue.isEmpty() && rotate < queue.size()) {

            // Agar front student aur top sandwich same hain
            if (queue.peek().equals(stack.peek())) {

                queue.remove();   // Student queue se bahar
                stack.pop();    // Sandwich stack se bahar
                rotate = 0;     // Rotation reset

            } else {

                // Student ko queue ke peeche bhej do
                queue.add(queue.remove());
                rotate++;
            }
        }

        return queue.size();
    }
}