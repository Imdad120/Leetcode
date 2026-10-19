class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int c=0;
        for(int i=0; i<=hours.size()-1; i++)
        {
            for(int j=i+1; j<=hours.size()-1; j++)
            {
                if((hours[i] + hours[j]) % 24 == 0)
                c++;
            }
        }
        return c;
    }
};