class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<int>ans(k);
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int s=0;
        int e=n-1;
        int m= arr[(n-1)/2];
        for(int i=0; i<=k-1; i++)
        {
            if(abs(arr[s]-m)>abs(arr[e]-m))
            {
                ans[i]=arr[s];
                s++;
            }
            else{
                ans[i]=arr[e];
                e--;
            }
        }
        return ans;
    }
};