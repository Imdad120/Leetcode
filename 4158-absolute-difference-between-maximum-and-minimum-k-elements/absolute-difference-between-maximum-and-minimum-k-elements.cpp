class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        // int n = nums.size();
        // int s = 0;
        // int p = 0;
        // for (int i = 0; i < k; i++) {
        //     s += nums[i];
        // }
        // for (int j = n - 1; j >= n - k; j--) {
        //     p += nums[j];
        // }
        // return abs(p - s);


        int kmin=0;
        int kmax=0;
        for(int i=0; i<=(k-1); i++)
        {
            kmin+=nums[i];
            kmax+=nums[nums.size()-1-i];
        }

        return abs(kmax-kmin);
    }
};