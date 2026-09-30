class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        int b = 0;
        int p = 0;
        int c = 0;
        vector<int>ans;
        sort(buses.begin(), buses.end());
        sort(passengers.begin(), passengers.end());
        
        while (b < buses.size()) {
            c = 0;
            while (p < passengers.size()) {
                if (buses[b] >= passengers[p] && c != capacity) {
                    ans.push_back(passengers[p]);
                    p++;
                    c++;
                } else {
                    break;
                }
            }
            b++;
        }
        
        int result = 0;
        if (c < capacity) {
            result = buses.back();
        } else {
            result = ans.back();
        }
        
        sort(ans.begin(), ans.end());
        while (binary_search(ans.begin(), ans.end(), result)) {
            result--;
        }
        
        return result;
    }
};