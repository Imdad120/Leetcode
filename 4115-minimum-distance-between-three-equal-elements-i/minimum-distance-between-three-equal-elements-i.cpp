class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0; i <= (int)nums.size() - 1; i++) {
            int j = -1;
            int k = -1;
            int val = nums[i];
            for(int p = i + 1; p <= (int)nums.size() - 1; p++) {
                if((val == nums[p]) && (j == -1)) {
                    j = p;
                }
                else if((val == nums[p]) && (j != -1) && (k == -1)) {
                    k = p;
                    break;
                }
            }
            if((j != -1) && (k != -1)) {
                int d = (abs(i - j) + abs(j - k) + abs(k - i));
                ans = min(ans, d);
            }
        }

        if(ans == INT_MAX)
            return -1;

        return ans;
    }
};