class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="";
        string str2="";
        for(string s:  word1)
        {
            str1=str1+s;
        }
          for(string t:  word2)
        {
            str2=str2+t;
        }
        if(str1==str2)
        return true;

        return false;
    }
};