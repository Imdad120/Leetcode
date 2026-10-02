class Solution {
    int helper(int n)
    {
        int maxm=INT_MIN;
        int minm=INT_MAX;
        while(n>0){
            int d=n%10;
            maxm=max(d,maxm);
            minm=min(d,minm);
           
            n=n/10;
        }
         return maxm-minm;
    }


public:
    int maxDigitRange(vector<int>& nums) {
        int maxm=0;
        
        for(int i=0; i<=nums.size()-1; i++)
        {
           int h= helper(nums[i]);
           maxm=max(maxm,h);
           
        }
        int sum=0;
        for(int i=0; i<=nums.size()-1; i++)
        {
            int h=helper(nums[i]);
            if(h==maxm)
            sum+=nums[i];
        }

        
        return sum;


        
    }
};