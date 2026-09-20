class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {


        //USING UNORDERED SET
        unordered_set<int>st;
        for(int i=0 ; i<=nums.size()-1; i ++)
        {
            if(st.count(nums[i]))
            return true;
            else
           {
             st.insert(nums[i]);
            }

            if(st.size()>k)
            st.erase(nums[i-k]);
        }

        return false;
        
    }
};