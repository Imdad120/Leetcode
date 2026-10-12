class Solution {
    public long maxWeight(int[] pizzas) {
        Arrays.sort(pizzas);
        int n = pizzas.length;
        int days = n/4;
        int oddDays = (days + 1)/2;
        int evenDays = days/2;
        
        int i = n-1;
        long ans = 0;

        for(int j = 0 ; j < oddDays; j++){
            ans += pizzas[i];
            i--;
        }
        for(int j =0 ; j < evenDays;j++ ){
            i--;
            ans += pizzas[i];
            i--;
        }
        return ans;
    }
}