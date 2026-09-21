class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        int i = p.size()-1;
        int j=t.size()-1;
        int c=0;
        while(i>=0 && j>=0)
        {
            if(p[i]<=t[j])
            { c++;
                i--;
                j--;
             }
             else{
                i--;
             }
        }
        return c;
    }
};