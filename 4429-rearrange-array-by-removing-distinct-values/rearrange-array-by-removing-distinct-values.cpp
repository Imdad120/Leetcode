class Solution {
public:
    vector <int>rearrangeArray(vector<int>nums) {
        vector<int>freq(101, 0);
        for(int i : nums) {
            freq[i]++;
        }
        vector <int>ans;
        while(true) {
            bool added = false;
            for(int i = 0; i < freq.size(); i++) {
                if(freq[i] > 0) {
                    ans.push_back(i);
                    freq[i]--;
                    added = true;
                }
            }
            if(!added) break;
        }
        return ans;
    }
};