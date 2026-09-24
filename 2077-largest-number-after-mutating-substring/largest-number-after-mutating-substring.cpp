class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        bool start=false; 
        for(int i=0; i<=num.size()-1; i ++)
        {
            int d=num[i]-'0';
            if(change[d]>d)
            {
                num[i]=change[d]+'0';
                start=true;
            }
            else if( change[d]==d && start)
             num[i]=change[d]+'0';

             else if(change[d]<d && start)
             break;

        }
        return num;

    }
};