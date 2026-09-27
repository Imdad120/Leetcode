class Solution {
public:
    int minOperations(int k) {
        int ans=k-1;
        for(int i=1; i<=k; i++)
        {
            int past = i-1;
            int req = (k + i - 1) / i - 1;
            ans=min((past+req),ans);        
            
        }
        return ans;
    }
};