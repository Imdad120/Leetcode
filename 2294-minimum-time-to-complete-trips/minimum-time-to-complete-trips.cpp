
class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        
    long long l = 1;
        long long h = 0;
        long long minm = time[0];
        for(int i : time)
        {
          minm = min(minm, (long long)i);
          h = max(h, (long long)i);
        }
        h = h * totalTrips;
        while(l < h)
        {
            long long mid = l + (h - l) / 2;
            long long total = 0;
            for(int i : time)
            {
                total += mid / i;
                if(total >= totalTrips)
                {
                    break;
                }
                
            }
            if(total >= totalTrips)
            {
                h = mid;
            }
            else{
                l = mid + 1;
            }

        }
        return l;
    }
};