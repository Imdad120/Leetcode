class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int c=0;
        int flag=2;
        for(int i=1; i<=nums.size()-1; i++)
        {
            if(flag%2==0)//even case
            {
                if(nums[i]==nums[i-1])
                {
                    c++;
                }
                else{
                    flag=1;

                }

            }
            else{
                flag=2;
            }
        }
        if((nums.size()-c)%2!=0)
            c++;

        return c;
    }
};