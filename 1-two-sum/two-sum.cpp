class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //THIS IS THE BRUTE FORCE APPROACH

        // WITH A TIME COMPLEXITY OF  O(n^2)

        // vector<int>vec;
        // for(int i=0; i<=nums.size()-1; i++)
        // {
        //     int f=nums[i];
        //     for(int j=i+1; j<=nums.size()-1; j++)
        //     {
        //         int s=nums[j];
        //         int sum= f+s;
        //         if(sum==target)
        //         {
        //             vec.push_back(i);
        //             vec.push_back(j);
        //             break;

        //         }
        //     }
        // }
        // return vec;


        //BETTER APPRAOCH WITH TIME COMPLEXITY OF O(nlogn)
    // int n = nums.size();
    //     std::vector<std::pair<int, int>> vec;
    //     for (int k = 0; k <=n-1; k++) {
    //         vec.push_back({nums[k], k});
    //     }
    //     std::sort(vec.begin(), vec.end());
    //     int i = 0;
    //     int j = n - 1;
    //     while (i < j) {
    //         int sum = vec[i].first + vec[j].first;
    //         if (sum == target) {
    //             return {vec[i].second, vec[j].second};
    //         }
    //         else if (sum > target) {
    //             j--;
    //         }
    //         else {
    //             i++;
    //         }
    //     }
    //     return {};

        // OPTIMISED SOLUTION USING HASHMAP 
        unordered_map<int,int>m;// map to store the first value with their index
        vector<int>ans;
        int n=nums.size();
        for(int i=0; i<=n-1; i++)
        {
            int f=nums[i];
            int s=target-f;
            if(m.find(s)!=m.end())
            {
                ans.push_back(i);
                ans.push_back(m[s]);
            }
            m[f]=i;
        }
        return ans;
    }
};