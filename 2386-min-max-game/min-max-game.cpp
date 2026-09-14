class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        while(n!=1)
        {
            int x=n/2;
            vector<int>arr(x);
            for(int i=0; i<=x-1; i++ )
            {
                if(i%2==0)
                {
                    arr[i]=min(nums[2*i],nums[(2*i)+1]);
                }
                else{
                       arr[i]=max(nums[2*i],nums[(2*i)+1]);
                }
            }
             nums = arr;
             n=n/2;
            
        }
        return nums[0];
       

        
    }
};