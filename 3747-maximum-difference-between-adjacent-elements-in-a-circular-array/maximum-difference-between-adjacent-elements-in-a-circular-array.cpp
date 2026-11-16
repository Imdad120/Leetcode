class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxm = INT_MIN;
        int n = nums.size();
        for (int i = 0; i <= n - 1; i++) {
            int diff = abs(nums[i] - nums[(i + 1) % n]);
            maxm = max(maxm, diff);
        }
        return maxm;
    }
};