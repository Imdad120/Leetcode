class Solution {
public:
    int minElement(vector<int>& nums) {
        int minm=INT_MAX;
        for(int i=0; i<=nums.size()-1; i++)
        {
           
            int sum=0;
            while(nums[i]>0)
            {
                int d=nums[i]%10;
                sum=sum+d;
                nums[i]=nums[i]/10;
            }
            minm=min(minm,sum);
            
        }
        
        return minm;
        
    }
};