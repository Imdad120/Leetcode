class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n = cost.size()-1;
        int c=0;
      
        for(int i=n; i>=0; i--)
        {
            if((n-i)%3!=2)
            {
                c+=cost[i];
            }
        }
        return c;
        
    }
};