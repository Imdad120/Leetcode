class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        //brute force approach 

        int minm=INT_MAX;
        int n=nums.size();
        for(int i=0; i<=n-1; i++)
        {
            if(nums[i]==target)
            {
                minm=min(minm, abs(i-start));
            }
        }
       return minm; 
    }
};