class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        int c=0;
        int f=arr[0];
        for(int i=1; i<=arr.size()-1; i++)
        {
            if(arr[i]>f)
            {
                f=arr[i];
                c=1;
            }
            else{
                c++;
            }

            if(c==k)
            return f;
        }
        return f;
    }
};