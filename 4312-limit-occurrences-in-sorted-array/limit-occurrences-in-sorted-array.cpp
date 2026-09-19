class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int>ans;
        int c=0; 
        for(int i=0; i<=n-1 ; i ++)
        {
            if(i==0 || nums[i]!=nums[i-1])
            c=0;

            if(c<k)
            ans.push_back(nums[i]);

            c++;
        }
        return ans;
        
    }
};