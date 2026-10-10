;
class Solution {
public:
        int help(int n)
        {
            int s=0;
            while(n>0)

            {
                int d=n%10;
                s+=d;
                n=n/10;
            }

            return s;
        }
    int countBalls(int l, int h) {
        unordered_map<int,int>freq;
        for(int i=l; i<=h; i++)
        {
            int s=help(i);
            if(freq.count(s))
            {
                freq[s]++;
            }
            else{
                freq[s]=1;
            }
        }
        int maxm=0;
        for(auto i :  freq)
        {
                maxm=max(maxm,i.second);
        }

        return maxm;

        
    }
};