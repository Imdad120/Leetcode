class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0;
        long long maxm= (long long )nums[0];
        long long diff=0;
        for(int i=1; i<=nums.size()-1; i++)
        {
            ans=max(ans,(diff*nums[i]));
            diff=max(maxm-nums[i],diff);
            maxm=max((long long)nums[i],maxm);

        }
        return ans;

        
    }
};