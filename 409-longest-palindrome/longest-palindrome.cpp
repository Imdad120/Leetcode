class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>freq;
        for( char i : s)
        {
            if(freq.find(i)!=freq.end())
            {
                freq[i]++;
            }
            else{
                freq[i]=1;
            }
        }
        int evensum=0;
        bool odd =false;
        for(auto i : freq)
        {
            int val = i.second;
            if(val%2==0)
            evensum+=val;
            else{
                evensum+=(val-1);
                odd=true;
            }

        }

        if(odd==true)
        evensum++;

        return evensum;
        
    }
};