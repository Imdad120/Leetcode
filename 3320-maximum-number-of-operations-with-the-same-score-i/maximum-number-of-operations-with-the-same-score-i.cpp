class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n=nums.size();
        int c=1;
        int val=nums[0]+nums[1];
        for(int i=2; i<=n-1; i+=2)
        {
            if((nums[i]+nums[i+1])==val)
            c++;
            else
            break;
        }
        return c;
    }
};