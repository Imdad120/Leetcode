class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int st=0;
        int en=n-1;
        int ans=0;
        while(st<en)
        {
            int sum= nums[st]+nums[en];
            ans= max(ans, sum);
            st++;
            en--;

        }
        return ans;

    }
};