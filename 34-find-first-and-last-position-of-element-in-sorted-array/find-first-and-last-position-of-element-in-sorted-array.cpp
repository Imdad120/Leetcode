class Solution {
public:
    int findfirst(vector<int>& nums, int target) {
        int ans = -1;
        int l = 0;
        int h = nums.size() - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (nums[mid] == target) {
                ans = mid;
                h = mid - 1;
            } else if (nums[mid] > target) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }

    int findlast(vector<int>& nums, int target) {
        int ans = -1;
        int l = 0;
        int h = nums.size() - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (nums[mid] == target) {
                ans = mid;
                l = mid + 1;
            } else if (nums[mid] > target) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec(2, -1);
        int f = findfirst(nums, target);
        int s = findlast(nums, target);
        vec[0] = f;
        vec[1] = s;
        return vec;
    }
};