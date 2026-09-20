class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int ans=0;
        for(int i : nums)
        {
            if(i==1)
            sum+=i;
            else
            {
                
                ans=max(sum,ans);
                sum=0;
            }
        }

        ans=max(sum,ans);
        return ans;
        
    }
};