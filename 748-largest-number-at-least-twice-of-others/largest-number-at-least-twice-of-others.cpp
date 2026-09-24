class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxin = 0;
        int maxm = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > maxm) {
                maxm = nums[i];
                maxin = i;
            }
        }
        for(int i = 0; i < nums.size(); i++) {
            if(i != maxin && nums[i] * 2 > maxm) {
                return -1;
            }
        }
        return maxin;
    }
};