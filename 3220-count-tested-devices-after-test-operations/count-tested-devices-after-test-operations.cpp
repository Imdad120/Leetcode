class Solution {
public:
    int countTestedDevices(vector<int>& b) {
        int t=0;
        for(int i=0; i<=b.size()-1; i++)
        {
            if(b[i]>0)
            {
                t++;

                 for(int j=i+1; j<=b.size()-1; j++)
                 {
                    b[j]=b[j]-1;

                }
                
            }
            else{
                continue;
            }
            
        }

        return t;
    }
};