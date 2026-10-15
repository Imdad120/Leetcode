class Solution {
public:
    int sumCounts(vector<int>& nums) {
            int c=0;
            int n=nums.size();
            for(int i=0; i<=n-1; i++)
            {
                unordered_set<int>st;
                for(int j=i; j<=n-1; j++)
                {
                    st.insert(nums[j]);
                    int sz=st.size();
                    c+=sz*sz;
                }
            }
            return c;
        
    }
};