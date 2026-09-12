class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> arr(n + 1);
        int I = 0;
        int D = n;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'I') {
                arr[i] = I++;
            } else {
                arr[i] = D--;
            }
        }

        arr[n] = I;
        return arr;
    }
};