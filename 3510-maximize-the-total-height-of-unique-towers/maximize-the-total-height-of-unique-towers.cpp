class Solution {
public:
    long long maximumTotalSum(vector<int>& nums) {
        
    long long count=0;
        sort(nums.begin(),nums.end());
        int prev=INT_MAX;
        for(int i=nums.size()-1; i>=0; i--)
        {
            int val=min(nums[i],prev-1);
            count+=val;

            if(val<=0)
            return -1;

            prev=val;

        }

        return count;
    }
};