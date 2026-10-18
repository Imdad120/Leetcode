class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<int>freq(k+1,0);
        int c=0;
        int m=0;
        int n=nums.size();
        for(int i=n-1; i>=0; i--)
        {
            if((nums[i]<=k)&&(freq[nums[i]]==0))
            {
                m++;
                freq[nums[i]]++;
            }
            c++;

            if(m==k)
            return c;
        }  

        return 0;      
    }
};