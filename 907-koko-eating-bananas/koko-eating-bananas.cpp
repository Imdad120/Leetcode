class Solution {
long long hours(vector<int>& piles, int k) {
        long long sum = 0;
        for (int i : piles) {
            sum += (i + k - 1LL) / k;
        }
        return sum;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int maxP = 0;
        for (int p : piles) {
            maxP = max(maxP, p);
        }

        int low = 1;
        int high = maxP;
        int ans = high;

        while (low <= high) {
            int k = low + (high - low) / 2;
            long long totalhours = hours(piles, k);
            if (totalhours > h) {
                low = k + 1;
            } else {
                ans = k;
                high = k - 1;
            }
        }
        return ans;
        
    }
};