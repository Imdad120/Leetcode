class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float>a;
        sort(nums.begin(),nums.end());
        int n = nums.size();
            for(int i=0; i<n/2; i++)
            {
                double avg = (float(nums[i]+nums[n-i-1]))/2;
                a.push_back(avg);
              
            }
       float minm = INT_MAX;
    for (float i : a) {
    minm = std::min(minm, i);
}
            return minm;
        
    }
};