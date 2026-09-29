class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long curr = k;
        long long cost = 0;
        for(long long i : nums)
        {
           if(i>curr)
           {
            long long c=(i-curr+k-1)/k;
            curr+=c*k;
            cost+=c;
           }
            curr = curr - i;
        }

        long long MOD = 1000000007;
        cost %= MOD;
        long long sum = (cost * (cost + 1) % MOD * 500000004) % MOD;
        return sum;
    }
};