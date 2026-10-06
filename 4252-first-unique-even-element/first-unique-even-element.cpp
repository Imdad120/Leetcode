class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        
    for(int i=0; i<=nums.size()-1; i++)
    {
       
        if(nums[i]%2==0)
         {
         int f=0;
        for(int j=0; j<=nums.size()-1; j++)
        {
            if((nums[j]==nums[i])&&(i!=j))
            {
                f=1;
                break;


            }

        }
        if(f==0)
        return nums[i];
        
    }

    }

    return -1;
       
    }
};