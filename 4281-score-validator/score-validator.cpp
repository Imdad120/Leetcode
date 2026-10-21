class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> ans(2);
        
        for(string i : events)
        {
            if(ans[1] == 10)
                break;
            if(i == "W")
                ans[1]++;
            else if(i == "WD")
                ans[0]++;
            else if(i == "NB")
                ans[0]++;
            else
            {
                int num = std::stoi(i);
                ans[0] += num;
            }
        }
        
        return ans;
    }
};