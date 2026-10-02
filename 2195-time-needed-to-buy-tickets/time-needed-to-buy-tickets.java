class Solution {
    public int timeRequiredToBuy(int[] tickets, int k) {

        Queue<int[]> q = new LinkedList<>();

        // [person index, remaining tickets]
        for (int i = 0; i < tickets.length; i++) {
            q.add(new int[]{i, tickets[i]});
        }

        int time = 0;

        while (true) {

            int[] person = q.remove();

            // Person takes 1 ticket
            person[1]--;
            time++;

            // If this is person k and all tickets are finished
            if (person[0] == k && person[1] == 0) {
                return time;
            }

            // If this person still needs tickets,
            // put them at the end of queue
            if (person[1] > 0) {
                q.add(person);
            }
        }
    }
}