class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>freq(56,0);
        for(char i : word)
        {
            if((i<='z')&&(i>='a'))
            freq[i-'a']++;
            else
            freq[i-'A'+26]++;

        }
        int c=0;
        for(int i=0; i<(freq.size())/2; i++)
        {
            if((freq[i]>0)&&(freq[i+26]>0))
            c++;
        }
        return c;
    }
};