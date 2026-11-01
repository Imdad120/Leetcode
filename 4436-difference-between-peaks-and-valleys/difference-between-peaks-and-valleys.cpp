class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peak=0;
        int valley=0;
        for(int i=1; i<=nums.size()-2; i++)
        {
            if((nums[i] > nums[i - 1])&&(nums[i] > nums[i + 1]))
             peak+=nums[i];
             else if((nums[i] < nums[i - 1])&&(nums[i] < nums[i + 1]))
             valley+=nums[i];
        }
        int diff=peak-valley;
        return diff;

        
    }
};