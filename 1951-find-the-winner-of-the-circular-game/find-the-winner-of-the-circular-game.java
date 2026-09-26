class Solution {
    public int findTheWinner(int n, int k) {
        Queue<Integer> q = new LinkedList<>();
        for(int i = 1 ; i<= n ;i++){
            q.add(i);
        }
        // k-1 elemnet remobe and add
        while(q.size()>1){
            for(int i = 1 ;i <= k-1; i++){
                q.add(q.remove());
            } 
            q.remove();    //kth will be  remove 
        }
        return q.peek();
    }
}