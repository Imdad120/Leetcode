class Solution {
public:
    bool validDigit(int n, int x) {
        std::string str = std::to_string(n);
        if((str[0]-'0')==x)
        return false;
        int sz=str.size();
        for(int i=1; i<=sz-1; i++)
        {
            if((str[i]-'0')==x)
            return true;
        }
        return false;
       
    }

};