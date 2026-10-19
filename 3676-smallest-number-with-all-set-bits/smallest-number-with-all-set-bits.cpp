class Solution {
public:
    int smallestNumber(int n) {
        int p=1;
        while(p<=n)
        {
            p=p*2;
        }
        return p-1;
    }
};