class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_map<int,int>mp;
        for(int i=0; i<=nums1.size()-1; i++)
        {
            int val=nums1[i];
            for(int j=1; j*j<=nums1[i]; j++)
            {
                if(val%j==0)
                {
                    if(mp.count(j))
                    {
                        mp[j]++;
                    }
                    else{
                        mp[j]=1;
                    }

                    if(j!=val/j)
                    {
                        if(mp.count(val/j))
                        {
                            mp[val/j]++;
                        }
                        else{
                            mp[val/j]=1;
                        }
                    }
                }
            }

        }

        long long ans=0;
        for(long long i : nums2)
        {
            if(mp.count(i*k))
            {
                ans+=mp[i*k];
            }
        }

        return ans;
        
    }
};