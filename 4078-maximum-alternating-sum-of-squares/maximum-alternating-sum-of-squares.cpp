#include <vector>
#include <algorithm>

class Solution {
public:
    long long maxAlternatingSum(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<long long> squares(n);
        for (int i = 0; i < n; i++) {
            squares[i] = (long long)nums[i] * nums[i];
        }
        std::sort(squares.begin(), squares.end());
        
        long long total = 0;
        int negCount = n / 2;
        
        for (int i = 0; i < n; i++) {
            if (i < negCount) {
                total -= squares[i];
            } else {
                total += squares[i];
            }
        }
        return total;
    }
};