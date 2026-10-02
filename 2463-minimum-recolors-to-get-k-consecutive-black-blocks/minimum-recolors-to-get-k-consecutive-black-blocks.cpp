class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        vector<char>b;
        for(int i : blocks)
        {
            b.push_back(i);
        }
        int c=0;
        int ans=k;
        for(int i=0; i<=b.size()-1;i++)
        {
            if(b[i]=='W')
            c++;
            if((i>=k)&&(b[i-k]=='W'))
            {
                c--;
            }
            if(i>=k-1)
            {
                ans=min(ans,c);
            }
        }

    return ans;
        }
    
};