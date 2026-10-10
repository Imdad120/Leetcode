class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int c=0;
        int s=0;
        for(int i : nums)
        {
            s+=i;
        }
        int n=nums.size();
        for(int i=0; i<nums.size()-1; i++)
        {
            s=s-nums[i];
            int check= s/(n-i-1);
            if(check<nums[i])
            c++;

        }
        return c;
        
    }
};