class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>st;
        for(int i : nums)
        {
            st.insert(i);
        }
        for(int i: st)
        {
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        int c=0;

        for(int i =0 ; i<=ans.size()-1; i++)
        {
            if(ans[i]==0)
            continue;
            for(int j=i; j<ans.size()-1; j++)
            {
                ans[j]=ans[j]-ans[i];
                
            }
            c++;
        }

        return c;
    }
};