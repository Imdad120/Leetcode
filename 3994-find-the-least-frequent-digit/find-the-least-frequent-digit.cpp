class Solution {
public:
    int getLeastFrequentDigit(int n) {
        if (n == 0) return 0;
        
        unordered_map<int, int> freq;
        while (n > 0) {
            
            int d = n % 10;
            if (freq.find(d) != freq.end()) {
                freq[d]++;
            } else {
                freq[d] = 1;
            }
            n = n / 10;
        }
        
        int ans = INT_MAX;
        int minm = INT_MAX;
        for (auto i : freq) {
            if (i.second < minm) {
                minm = i.second;
                ans = i.first;
            } else if (i.second == minm) {
                if (i.first < ans) {
                    ans = i.first;
                }
            }
        }
        return ans;
    }
};
