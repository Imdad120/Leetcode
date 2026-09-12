class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
       while(k-->0)
       {
        int min=nums[0];
        int idx=0;
        for(int i=1; i <=nums.size()-1 ; i++)
        {
            if(nums[i]<min)
           {
             min=nums[i];
            idx=i;
           }

        }
        nums[idx]=min*m;
       }
        return nums;
    }
};