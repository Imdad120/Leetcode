class Solution {
    public int findKthPositive(int[] arr, int k) {
        int low = 0 , high = arr.length-1;
        while(low<= high){
            int mid = low +(high - low)/2;
            int correct_no = mid+1;
            int missing_no = arr[mid] - correct_no;
            if(missing_no >= k) high = mid-1;
            else low = mid+1;
        }
        return high + 1 + k;
    }
}