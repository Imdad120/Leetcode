class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
       
        for(int i=0; i<=nums.size()-1; i++)
        {
                c+=min(nums[i] % 3, 3 - (nums[i] % 3));
        }
        return c;
        
    }
};