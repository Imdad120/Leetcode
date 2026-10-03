class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int suma=0;
        int sumb=0;
        unordered_set<int>st;
        for(int i : aliceSizes)
        {
            suma+=i;
        }
        for(int i : bobSizes)
        {
            st.insert(i);
            sumb+=i;
        }
        vector<int>ans(2);

        for(int i : aliceSizes)
        {
            int x=(sumb-suma)/2+i;
            if(st.count(x))
           { ans[0]=i;
            ans[1]=x;}

        }

        return ans;
    }
};