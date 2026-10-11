class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size()>1)
        {
            sort(stones.begin(),stones.end());
            int b=stones.back();
            stones.pop_back();
            int a=stones.back();
            stones.pop_back();
            if(a!=b)
            {
                stones.push_back(b-a);
            }
          

        }
        if(stones.size()==1)
        return stones[0];


        return 0;

    }
};