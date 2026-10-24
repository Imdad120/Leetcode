class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int c=0;
        for(int i =0; i<=nums1.size()-1; i++)
        {
            for(int j=0; j<=nums2.size()-1; j++)
            {
                if(nums1[i]%(nums2[j]*k)==0)
                c++;
            }
        }
        return c;
        
    }
};