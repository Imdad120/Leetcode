class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
      
        vector<int>ans(nums.size());

        for(int i=0; i<=nums.size()-1; i++)
        {
            unordered_set<int>st1;
             unordered_set<int>st2;

             for(int j=0; j<=i; j++)
             {
                st1.insert(nums[j]);
             }

             for(int k=i+1; k<=nums.size()-1; k++)
             {
                st2.insert(nums[k]);
             }

             ans[i]=st1.size()-st2.size();
        }
    
        return ans;
    }
};