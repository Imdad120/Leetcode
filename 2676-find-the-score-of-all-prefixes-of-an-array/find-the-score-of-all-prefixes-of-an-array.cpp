class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
      vector<long long>ans(nums.size());
      int maxm=nums[0];
      for(int i=0; i<=nums.size()-1; i++)
      {
        maxm=max(maxm,nums[i]);
        ans[i]=(long long)(nums[i]+maxm);
      }
      for(int i=1; i<=nums.size()-1; i++)
      {
        ans[i]=ans[i]+ans[i-1];
      }
      return ans;

        
    }
};