class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int>st;
        for(int i=0; i<=digits.size()-1; i++)
        {
            for(int j=0; j<=digits.size()-1; j++)
            {
                for(int k=0; k<=digits.size()-1; k++)
                {
                    if((i==j) || (j==k) || (k==i))
                    {
                        continue;

                    }
                    if((digits[i]==0)||(digits[k]%2!=0))
                    continue;

                    int num=digits[i]*100+digits[j]*10+digits[k];
                    st.insert(num);
                    
                }
            }
        }
        vector<int>ans;
        for(int i : st)
        {
            ans.push_back(i);
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};