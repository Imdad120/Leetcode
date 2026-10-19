class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        vector<int>freq(1001);
        for(int i=0; i<=nums.size()-2; i++)
        {
            if(nums[i]==key)
            {
                freq[nums[i+1]]++;
            }

            
        }
        int maxm=0;
        int idx=0;
        for(int i=0; i<=freq.size()-1; i++)
        {
            if(maxm<freq[i])
            {
                maxm=freq[i];
                idx=i;

            }
        }

        return idx;
    }
};