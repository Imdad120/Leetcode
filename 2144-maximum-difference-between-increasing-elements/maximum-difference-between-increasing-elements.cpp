class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxm=INT_MIN;
        for(int i=0; i<=nums.size()-1; i++)
        {
            for(int j=i+1; j<=nums.size()-1; j++)
            {
                if(nums[j]>nums[i])
                maxm=max(maxm, (nums[j]-nums[i]));
            }
        }
        if(maxm<0)
        return -1;


        return maxm;
    }
};