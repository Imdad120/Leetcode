class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);
        for(char c : s) {
            freq[c - 'a']++;
        }
        int maxm = INT_MIN;
        int minm = INT_MAX;
        for(int i = 0; i < 26; i++) {
            if(freq[i] > 0) {
                if(freq[i] % 2 != 0) {
                    maxm = max(maxm, freq[i]);
                } else {
                    minm = min(minm, freq[i]);
                }
            }
        }
        return maxm - minm;
    }
};