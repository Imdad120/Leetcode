class Solution {
public:
    bool isPerfectSquare(int num) {
        int st = 1;
        int en = num;
        while (st <= en) {
            int mid = st + (en - st) / 2;
            long long c = (long long)mid * mid;
            if (c == num)
                return true;
            else if (c > num) {
                en = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return false;
    }
};