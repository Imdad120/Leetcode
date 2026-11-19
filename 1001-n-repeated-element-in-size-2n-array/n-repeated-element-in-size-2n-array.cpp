class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        int sz=nums.size();
        int n=sz/2;
        unordered_map<int,int>mp;
        for(int i: nums)
        {
            if(mp.count(i))
            mp[i]++;
            else
            mp[i]=1;
        }
        for(auto i : mp)
        {
            if(i.second==n)
            return i.first;

        }

        return -1;
    }
};