class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int n=skills.size();
        int i=0;
        int j=1;
       int c=0;

       if(k>=n)
       {
        int maxm=0;
            for(int i=0; i<=n-1; i++)
            {
                if(skills[i]>skills[maxm])
                {
                    maxm=i;

                }

            }
            return maxm;
        
       }
        while(j<n)
        {
          
            if(skills[i]>skills[j])
            {
               
                j++;
                c++;
                
            }
            else{
               
                i=j;
                j++;
                c=1;
            }
            if(c==k)
            return i;

        }
        return i;
        
    }
};