class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if(n<=k && m<=k)
        return 0;
        long long c=0;
        if(n>k)
        {
            c+=(long long)(n-k)*k;
        }
         if(m>k)
        {
            c+=(long long)(m-k)*k;
        }
        return c;
    }
};