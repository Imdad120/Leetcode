class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>freq;
        int ans=0;
        for(int i : tasks)
        {
            if(freq.count(i))
            {
                freq[i]++;
            }
            else
            {
                freq[i]=1;
                }
        }
        for(auto i : freq)
        {
            int check=i.second;
            if(check==1)
            return -1;

            ans+=check/3;


            if(check%3!=0)
            ans++;
        }
        return ans;
    }
};