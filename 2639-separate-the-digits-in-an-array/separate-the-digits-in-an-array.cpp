class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>answer;
        for(int i : nums)
        {
           std::string str = std::to_string(i);
            for(int j=0; j<=str.size()-1; j++)
            {
                answer.push_back(str[j]-'0');
            }
        }
        return answer;
        
    }
};