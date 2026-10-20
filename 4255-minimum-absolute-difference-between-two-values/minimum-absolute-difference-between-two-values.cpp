class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        // int ans=INT_MAX;
        // for(int i=0; i <=nums.size()-1; i++)
        // {
        //     if(nums[i]==1)
        //     {
        //         for(int j=0; j<=nums.size()-1; j++)
        //         {
        //             if(nums[j]==2)
        //             {
        //                 ans=min(ans, abs(i-j));
        //             }
        //         }
        //     }
        // }
        // if(ans!=INT_MAX)
        // return ans;
        // else
        // return -1;
            int ans=INT_MAX;
        int one=-1;
        int two=-1;
        for(int i=0; i<=nums.size()-1; i++)
        {
            if(nums[i]==1)
            {
                one=i;
                if(two!=-1)
                {
                    ans=min(ans,abs(one-two));
                }
            }
            if(nums[i]==2)
            {
                two=i;
                if(one!=-1)
                {
                    ans=min(ans,abs(one-two));
                }
            }
                 
        }
           if(ans!=INT_MAX)
            return ans;
         else
            return -1;
    
    }
};