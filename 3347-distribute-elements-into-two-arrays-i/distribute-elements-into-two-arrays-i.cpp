class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1(n);
        vector<int> arr2(n);
        
        arr1[0] = nums[0];
        arr2[0] = nums[1];
        
        int j = 1;
        int k = 1;
        
        for (int i = 2; i < n; i++) {
            if (arr1[j - 1] < arr2[k - 1]) {
                arr2[k] = nums[i];
                k++;
            } else {
                arr1[j] = nums[i];
                j++;
            }
        }
        
        for (int i = 0; i < k; i++) {
            arr1[j] = arr2[i];
            j++;
        }
        
        return arr1;
    }
};