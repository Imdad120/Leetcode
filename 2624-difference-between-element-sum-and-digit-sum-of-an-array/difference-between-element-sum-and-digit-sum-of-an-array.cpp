class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
      int sum = std::accumulate(nums.begin(), nums.end(), 0);
       int total=0;
    for(int i : nums)

   { 
     int s=0;
    while(i>0)
    {
        int d=i%10;
        s=s+d;
        i=i/10;
    }
    total+=s;

    }
        return abs(sum-total);
        
    }
};