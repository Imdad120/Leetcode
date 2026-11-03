class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i: nums)
        {
            if(mp.find(i) != mp.end())
            {
                mp[i]++;
            }
            else{
                mp[i]=1;
            }
        }
        int x=INT_MAX;
        for(int i : nums)
        {
            x=min(x,i);
        }
        int y=INT_MAX;
        for(auto i : mp)
        {
            if(i.first > x && i.second != mp[x])
            {
                y=min(y, i.first);
            }
        }
        if(y==INT_MAX)
        return {-1,-1};
        return {x, y};
    }
};