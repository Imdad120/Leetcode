class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int>s;
        
        for(int i=1; i<=n; i++)
        {
            int sum=0;
            int x=i;
            while(x>0)
            {
                sum+=x%10;
                x=x/10;
            }
            if(s.count(sum))
            {
                s[sum]++;
                
            }
            else{
                s[sum]=1;
            }

        }
        int maxm=0;
        for(auto& p : s)
        {
            int i = p.second;
            maxm=max(maxm,i);

        }
        
        int ans=0;
        for(auto& p : s)
        {
            int i = p.second;
            if(maxm==i)
            ans++;
        }

        return ans;
    }
};