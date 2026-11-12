class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        prefix[0] = nums[0];
        suffix[n - 1] = nums[n - 1];
        for (int i = 1; i <= n - 1; i++) {
            prefix[i] = nums[i] + prefix[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = nums[i] + suffix[i + 1];
        }
        vector<int> ans(n);
        for (int i = 0; i <= n - 1; i++) {
            int l = nums[i] * i - (prefix[i] - nums[i]);
            int r = (suffix[i] - nums[i]) - nums[i] * (n - i - 1);
            ans[i] = l + r;
        }
        return ans;
    }
};