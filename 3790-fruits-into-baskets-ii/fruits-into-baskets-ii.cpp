class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
   
    int n=fruits.size();
        int c=n;
       
        for(int i=0; i<=n-1; i++)
        {
            for(int j=0; j<=n-1; j++)
            {
                if(fruits[i]<=baskets[j])
                {
                    c--;
                    baskets[j]=0;
                    break;

                }
              
            }
        }
        return c;
    }
};