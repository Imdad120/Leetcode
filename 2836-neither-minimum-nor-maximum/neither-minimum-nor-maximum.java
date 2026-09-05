class Solution {
    public int findNonMinOrMax(int[] arr) {
        int n = Arrays.stream(arr).max().getAsInt();
        int m = Arrays.stream(arr).min().getAsInt();
        for(int i = 0 ; i < arr.length; i++){
            if(arr[i]<n && arr[i]>m) return arr[i];
        }
        return -1;
    }
}