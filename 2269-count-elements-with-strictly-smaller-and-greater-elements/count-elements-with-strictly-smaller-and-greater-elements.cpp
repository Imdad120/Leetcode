class Solution {
public:
    int countElements(vector<int>& nums) {
        if(nums.size()<3)
        return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int j=n-1;
        
        for(;i<n-1;i++)
        {
            if(nums[i]!=nums[i+1])
                break;
        }
         for(;j>0;j--)
        {
            if(nums[j]!=nums[j-1])
                break;
        }

        return max(0,j-i-1);



        
    }
};