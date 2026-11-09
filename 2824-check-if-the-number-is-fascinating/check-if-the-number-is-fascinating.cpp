class Solution {
    void help(int n, vector<int>&freq)
    {
        while(n>0)
        {
            int d=n%10;
            freq[d]++;
            n=n/10;
        }
    }
public:
    bool isFascinating(int n) {
        vector<int>freq(10);
        int a=n*2;
        int b=n*3;
        help(n,freq);
         help(a,freq);
          help(b,freq);

          for(int i=1; i<=freq.size()-1; i++)
          {
            if(freq[i]!=1)
            return false;
          }
        return true;
        
    }
};