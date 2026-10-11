class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        if(costs[0]>coins)
         return 0;
        int c=0;
        for(int i=0;i<=costs.size()-1; i++)
        {
            if(costs[i]<=coins)
            {
                c++;
                coins=coins-costs[i];
            }
            else{
                break;
            }
        }
       return c;
        
    }
};