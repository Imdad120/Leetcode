class Solution {
public:
    int isWinner(vector<int>& p, vector<int>& q) {
        int sum1=0;
        int sum2=0;
        for(int i=0; i<=p.size()-1; i++)
        {
            if(((i>=1)&&(p[i-1]==10))||((i>=2)&&((p[i-2])==10)))
            {
                sum1+=2*p[i];
            }
            else{
                sum1+=p[i];
            }

              if(((i>=1)&&(q[i-1]==10))||((i>=2)&&((q[i-2])==10)))
            {
                sum2+=2*q[i];
            }
            else{
                sum2+=q[i];
            }
        }
        if(sum1>sum2)
        return 1;
        if(sum2>sum1)
        return 2;
        
        return 0;
    }
};