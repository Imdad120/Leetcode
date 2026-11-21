class Solution {
public:
    int splitNum(int num) {
        
        string s= to_string(num);
        int n=s.size();
        sort(s.begin(), s.end());
        int n1=0;
        int n2=0;
        for(int i=0; i<=n-1;i++)
        {
            if(i%2==0)
            n1=n1*10+(s[i]-'0');
            else
            n2=n2*10+(s[i]-'0');
        }
        return n1+n2;

        
    }
};