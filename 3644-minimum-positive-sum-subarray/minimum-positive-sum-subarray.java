
class Solution {
    public int minimumSumSubarray(List<Integer> nums, int l, int r) {

        int n = nums.size();
        int minSum = Integer.MAX_VALUE;

        // Step 1: Create Prefix Sum
        int[] prefix = new int[n + 1];

        for(int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums.get(i);
        }

        // Step 2: Generate valid subarrays
        for(int i = 0; i < n; i++) {

            int start = i + l - 1;
            int end = Math.min(i + r - 1, n - 1);

            for(int j = start; j <= end; j++) {

                // Step 3: Calculate subarray sum
                int sum = prefix[j + 1] - prefix[i];

                // Step 4: Find minimum positive sum
                if(sum > 0) {
                    minSum = Math.min(minSum, sum);
                }
            }
        }

        // Step 5: Return answer
        if(minSum == Integer.MAX_VALUE) {
            return -1;
        }

        return minSum;
    }
}




// class Solution {
//     public int minimumSumSubarray(List<Integer> nums, int l, int r) {
        
//         int minSum  = Integer.MAX_VALUE;

//         for(int i = 0 ; i < nums.size() ; i++){
//             int sum  = 0 ;

//             for(int j = i ; j< nums.size();j++){
//                 sum += nums.get(j);

//                 int size = j - i + 1;

//                 if( size >= l && size <=r && sum > 0){
//                     minSum = Math.min(minSum , sum);
//                 }
//             }
            
//         }
//         if( minSum  ==  Integer.MAX_VALUE ){
//             return -1;
//         }
//         return minSum;
//     }
// }