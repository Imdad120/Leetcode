class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
       unordered_set<int>st;
       for(int i : nums)
        {
            st.insert(i);
        }
        int ans=0;
        for (int i : nums)
{
         if ((st.find(i + diff) != st.end())&&(st.find(i + diff*2) != st.end()) )
    {
        ans++;
        
    }
}
        
        return ans;
    }
};