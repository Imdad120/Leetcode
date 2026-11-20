class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        int total=0;
       
        for(int i=0; i<=n-1;i++)
        {
            int st=max(0,(i-nums[i]));
            for(int k=st;k<=i; k++)
            {
              total+=nums[k];  
            }
        }
        return  total;
    }
};