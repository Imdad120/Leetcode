class Solution {
    public int[] shuffle(int[] arr, int n) {
        int [] a = new int [n];
        int [] b = new int [n];
        for(int i = 0 ; i < n ;i++ ){
              a[i] = arr[i]; 
        }
        for(int i = 0; i < n  ; i++){
            b[i]=arr[i+n];
        }
        int [] result = new int[2*n];

        for(int i = 0; i < n; i++) {
         result[2 * i] = a[i];
         result[2 * i + 1] = b[i];
        }
        return result;
    }
}