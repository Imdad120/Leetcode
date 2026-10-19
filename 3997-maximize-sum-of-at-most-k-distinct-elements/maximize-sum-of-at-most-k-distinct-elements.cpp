class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(int i : nums)
        {
            st.insert(i);
        }
        vector<int> help;
        for(int i : st)
        {
            help.push_back(i);
        }
        sort(help.begin(), help.end());
        int n = help.size();

        vector<int> ans;
        for(int i = n - 1; i >= n - min(k, n); i--)
        {
            ans.push_back(help[i]);
        }
        return ans;
    }
};