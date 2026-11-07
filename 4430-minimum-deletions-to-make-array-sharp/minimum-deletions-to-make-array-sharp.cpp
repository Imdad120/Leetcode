class Solution {
public:
    int minDeletions(vector<int>& arr) {
        int c=0;
        for(int i=0; i<=arr.size()-2; i++)
        {
            if(arr[i]==arr[i+1])
                c++;
        }
        return c;
    }
};