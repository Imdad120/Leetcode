
class Solution {
public:
    vector <int>findLonely(vector<int> nums) {
        unordered_set <int>st;
        unordered_set <int>dup;
        for(int i : nums)
        {
            if(dup.count(i))
                st.insert(i);
            else
                dup.insert(i);
        }
        vector<int>ans;

        for(int i : dup)
        {
            if(!st.count(i) && !dup.count(i+1) && !dup.count(i-1))
                ans.push_back(i);
        }
        return ans;
    }
};