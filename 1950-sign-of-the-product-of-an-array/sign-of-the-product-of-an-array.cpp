class Solution {
public:
    int arraySign(vector<int>& nums) {
        for(int i=0; i<=nums.size()-1; i++)
        {
            if(nums[i]==0)
            return 0;
            if(nums[i]<0)
            nums[i]=-1;
            if(nums[i]>0)
            nums[i]=1;
        }
        int pro=1;
        for(int i : nums)
        {
            pro*=i;
        }
        return pro;
        
    }
};