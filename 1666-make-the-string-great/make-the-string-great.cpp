class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string ans="";
       for (char i : s) 
       {
     if ((!st.empty() && (tolower(i) == tolower(st.top())))&&(i!=st.top()))
     {
        st.pop();
    } else {
        st.push(i);
    }
}
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};