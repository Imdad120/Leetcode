class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        
        int minm=INT_MAX;
        for(int i=0; i<=n-1; i++)
        {
            int sum=0;
            for(int j=i; j<=n-1;j++)
            {
                sum+=nums[j];
                int sz=j-i+1;
                if((sz>=l) && (sz<=r) &&(sum>0))
                {
                    minm=min(sum,minm);
                }
            }
        }
        if(minm==INT_MAX)
        return -1;

        return minm;
    }
};