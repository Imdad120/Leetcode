class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0;
        int s = 1;
        while (n > 0) {
            int d = n % 10;
            ans += d * s;
            s *= -1;
            n = n / 10;
        }
        return ans * (-s);
    }
};