class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans = 0;
        int n = words.size();
        
        for (int i = 0; i < n; i++) {
            vector<int> vec(26, 0);
            string s = words[i];
            
            for (char k : s) {
                vec[k - 'a'] = 1;
            }
            
            for (int j = i + 1; j < n; j++) {
                int f = 0;
                string h = words[j];
                
                for (char k : h) {
                    if (vec[k - 'a'] == 1) {
                        f = 1;
                        break;
                    }
                }
                
                if (f == 0) {
                    ans = max(ans, (int)(s.size() * h.size()));
                }
            }
        }
        
        return ans;
    }
};