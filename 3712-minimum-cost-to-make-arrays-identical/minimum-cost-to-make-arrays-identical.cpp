class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        long long sum1=0;
        long long sum2=k;
        for(int i=0; i<=arr.size()-1; i++)
        {
            sum1+=abs(arr[i]-brr[i]);
           
        }
            sort(arr.begin(),arr.end());
            sort(brr.begin(),brr.end());

        for(int i=0; i<=arr.size()-1; i++)
        {
            sum2+=abs(arr[i]-brr[i]);
           
        }
           return min(sum1,sum2);
        
    }
};