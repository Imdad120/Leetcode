class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        for(int i : nums)
        {
            sum+=i;
        }
        int c=0;
        long long left=0;

        for(int i=0; i<=nums.size()-2; i++)
        {
            left+=nums[i];
            if(left>=(sum-left))
            {
                c++;
            }
        }

        return c;
    }
};