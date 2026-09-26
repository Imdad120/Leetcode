class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        int i=0;
         int j=0;
         int n=nums.size();
          while(i<n && j<n)
          {
            if(nums[i]<nums[j])
            {
                count++;
                i++;
                j++;

            }
            else{
                j++;
            }

          }

          return count;
        
    }
};