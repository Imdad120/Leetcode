class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxm=0;
        for(string i : strs)
        {
            bool f=true;
            for(int j=0; j<=i.size()-1; j++)
            {
                if((i[j]<'0')||(i[j]>'9'))
                {
                    f=false;
                    break;
                }
            }
            int val=0;
            if(f==true)
            {
                val=stoi(i);
            }
            else{
                val=i.size();
            }

        maxm=max(maxm,val);
        }

        return maxm;
    }
};