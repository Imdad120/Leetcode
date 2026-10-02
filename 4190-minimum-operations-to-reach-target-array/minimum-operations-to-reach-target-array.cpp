class Solution {
public:
    int minOperations(vector<int>nums, vector<int>target) {
        
       int c=0;
       unordered_map<int,int>freq;
       for(int i=0; i<=nums.size()-1; i++)
       {
            if(nums[i]!=target[i])
            {
                c++;
                if(freq.count(nums[i]))
                {
                    freq[nums[i]]++;
                }
                else{
                    freq[nums[i]]=1;
                }
            }
           
       }

            int total=0;
            for(auto i : freq)
            {
                total+=i.second-1;
            }

            return c-total;

    }
};