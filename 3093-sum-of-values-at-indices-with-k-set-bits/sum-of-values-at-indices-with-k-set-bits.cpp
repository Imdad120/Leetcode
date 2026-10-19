class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        
        int c=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(std::popcount(static_cast<unsigned int>(i))==k)
            {
                c+=nums[i];
            }
            
            
        }
        return c;
    }
};