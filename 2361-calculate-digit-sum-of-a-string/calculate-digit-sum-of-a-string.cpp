class Solution {
public:
    string digitSum(string s, int k) {
    while(s.size()>k)
    {
        string ans="";
        int sum=0;
        int c=0;
        for(int i=0; i<=s.size()-1; i++)
        {
            sum+=s[i]-'0';
            c++;
            if((c==k)||(i==(s.size()-1)))
            {
                ans+=to_string(sum);
                c=0;
                sum=0;

            }
        }
        s=ans;

    }
       return s; 
    }
};