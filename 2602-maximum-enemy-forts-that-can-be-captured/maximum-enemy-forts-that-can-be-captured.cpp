class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n= forts.size();
        int ans=0;
       
        for(int i=0; i<=n-1; i++)
        {
            if(forts[i]!=0)
            {
                for(int j=i+1; j<=n-1; j++)
                {
                    if(forts[j]!=0)
                    {

                        if(forts[i]!=forts[j])
                        {
                            ans= max(ans,(j-i-1));
                        }
                        
                            break;
                        
                    }
                }
            }
        }
        return ans;
    }
};