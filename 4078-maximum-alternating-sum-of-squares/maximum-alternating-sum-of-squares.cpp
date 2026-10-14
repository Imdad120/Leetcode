class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int k=0; k<nums.size(); k++)
        {
            nums[k] = nums[k] * nums[k];
        }
        sort(nums.begin(), nums.end());
        long long ans = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(i < n / 2)
            {
                ans -= nums[i];
            }
            else
            {
                ans += nums[i];
            }
        }
        return ans;
        
    }
};