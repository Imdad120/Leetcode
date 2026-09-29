class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int c=0;
        while(i<=j)
        {
            if((nums[i]==0)&&(nums[j]!=0))
            {
                swap(nums[i],nums[j]);
                c++;
                i++;
                j--;
            }
            else if(nums[i]==0)
            j--;
            else 
            i++;

        }
        
        return c;
        
    }
};