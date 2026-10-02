class Solution {
public:
    int maxScore(vector<int>& nums) {
       int ans=0;
       sort(nums.begin(), nums.end(), std::greater());
       long long sum=0;
       for(int i : nums)
       {
            sum+=i;
           if(sum>0)
           ans++;
           else{
            break;
           }
       }
       return ans;
        
    }
};