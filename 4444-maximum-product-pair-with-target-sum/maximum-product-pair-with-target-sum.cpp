class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n=nums.size();
        long long sum=0;
            int maxm=INT_MIN;
            int flag=false;
        vector<int>ans(2,-1);
        for(int i=0; i<=n-1; i++)
        {   
            for(int j=i+1; j<=n-1; j++)
            {
                    long long s=nums[i]+nums[j];
                    if((s==target)&&((nums[i]!=nums[j])))
                    {
                       int pro=nums[i]*nums[j];
                       if((!flag)||(pro>maxm))
                       {
                        maxm=pro;
                        flag=true;

                        if(nums[i]>nums[j])
                        {
                            ans[0]=i;
                            ans[1]=j;
                        }
                        else{
                            ans[0]=j;
                            ans[1]=i;
                        }
                       }
                    }
            }
        }
        return ans;
    }
};
