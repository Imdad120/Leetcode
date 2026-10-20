class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pre(n);
        pre[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + nums[i];    
        }
        
        vector<long long> suf(n);
        suf[0] = pre[n - 1] - nums[0];
        for (int i = 1; i < n; i++) {
            suf[i] = suf[i - 1] - nums[i];
        }

        long long ans = LLONG_MAX;
        int idx = 0;
        for (int i = 0; i < n; i++) {
            long long f = pre[i] / (i + 1);
            long long s = 0;
            if (i != n - 1) {
                s = suf[i] / (n - 1 - i);
            }
            long long d = abs(f - s);
            if (d < ans) {
                ans = d;
                idx = i;
            }
        }
        return idx;
    }
};