class Solution {
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
        Arrays.sort(arr2);
        int count  = 0;
        for(int i = 0 ; i <arr1.length ; i++){
            int left = arr1[i] - d;
            int right = arr1[i] + d;

            int index = Arrays.binarySearch(arr2,left);
            if (index < 0) {
                index = -index - 1;
            }
            if (index == arr2.length || arr2[index] > right) {
              count++;
             }
        }
        return count;
    }
}