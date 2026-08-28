class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        for(int i=0; i<=nums.size()-1; i++)
        {
            int f=nums[i];
            for(int j=i+1; j<=nums.size()-1; j++)
            {
                int s=nums[j];
                int sum= f+s;
                if(sum==target)
                {
                    vec.push_back(i);
                    vec.push_back(j);
                    break;

                }
            }
        }
        return vec;
    }
};