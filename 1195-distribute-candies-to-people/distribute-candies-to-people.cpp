class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
       int i = 0;
        int g = 0;
        while (candies > 0)
        {
            g++;
            if (candies < g)
                g = candies;
            ans[i] += g;
            candies -= g;
            i++;
            i = i % num_people;
        }
        return ans;
        
    }
};