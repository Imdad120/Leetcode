class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ft=nums[n-1]-nums[2];
        int lt=nums[n-3]-nums[0];
        int rt=nums[n-2]-nums[1];
        int smallest = std::min({ft, lt, rt});
        return smallest;


    }
};