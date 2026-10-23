class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq(26, 0);
        for(char i : s)
        {
            freq[i - 'a']++;
        }
        int val = 0;
        for(int i = 0; i < freq.size(); i++)
        {
            if(freq[i] != 0)
            {
                val = freq[i];
                break;
            }
        }
        for(int i = 0; i < freq.size(); i++)
        {
            if(freq[i] != 0 && freq[i] != val)
            {
                return false;
            }
        }
        return true;
    }
};