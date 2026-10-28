class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;
        for(char i : s)
        {
            int f=s.find(i);
            int l= s.rfind(i);
            ans=max(ans,(l-f-1));
        }
        return ans;
        
    }
};