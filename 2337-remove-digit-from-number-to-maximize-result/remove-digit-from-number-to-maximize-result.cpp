class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxm="";
        int n=number.size();
        for(int i=0; i<=n-1; i++)
        {
            if(number[i]==digit)
            {
                string s = number.substr(0, i)+ number.substr(i+1, n);
                if(s>maxm)
                maxm=s;

            }
           
        }
         return maxm;
        
    }
};