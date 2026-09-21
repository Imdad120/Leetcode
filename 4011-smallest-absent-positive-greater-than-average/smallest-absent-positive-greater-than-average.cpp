class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        unordered_set<int>st;
        for(int i : nums)
        {
            st.insert(i);
            sum+=i;
        }
        int avg = (sum/n) +1;

        if(avg<1)
        avg=1;


        while(true)
        {

            if(st.count(avg))
                avg++;

            else
            return avg;

        }

        return 0;

    }
};