class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int maxm=INT_MIN;
        for(int i : nums)
        {
            maxm=max(maxm,i);
        }
        for(int i=0; i<=nums.size()-1; i++)
        {
            int diff=maxm-nums[i];
            ans+=diff;
        }

        return ans;
    }
};