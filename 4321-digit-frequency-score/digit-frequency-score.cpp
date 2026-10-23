class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> freq;
        int t = n;
        while(n > 0)
        {
            int d = n % 10;
            if(freq.count(d))
            {
                freq[d]++;
            }
            else{
                freq[d] = 1;
            }
            n = n / 10;
        }
        int sum = 0;
        for(auto i : freq)
        {
            sum += (i.first) * (i.second);
        }
        
        return sum;
    }
};