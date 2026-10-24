class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        // THIS APPROACH WILL THROW TIME LIMIT EXCEEDED


        // int ans=0;
        // int n=nums.size();
        // int val=0;
        // if(k==0)
        // return n;
        // sort(nums.begin(),nums.end());
        // for(int i=0; i<=n-k-1; i++)
        // {
        //     int c=0;
            
        //     val=nums[i];
        //     for(int j=i+1; j<=n-1; j++)
        //     {
        //         if(nums[j]!=val)
        //        {
        //          c++;

        //         }
        //         if(c==k)
        //         {
        //             ans++;
        //             break;
        //         }
                
        //     }
        // }
        // return ans;

       int n=nums.size();
       int ans=0;
       if(k==0)
       return n;

       
       sort(nums.begin(),nums.end());

       for(int i=0; i<=n-1; i++)
       {
        int l=i+1;
        int h=n-1;
        int idx=n;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[i]<nums[mid])
            {
                h=mid-1;
                idx=mid;
            }
            else{
                l=mid+1;
            }
        }
        int c=n-idx;
        if(c>=k)
        ans++;
       }
        return ans;   
           
    }
};