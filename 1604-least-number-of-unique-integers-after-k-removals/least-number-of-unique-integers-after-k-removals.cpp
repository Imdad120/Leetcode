class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>freq;
        for(int i : arr)
        {
            if(freq.count(i))
            {
                freq[i]++;
            }
            else{
                freq[i]=1;
            }
        }

        vector<int>help;
        for(auto i : freq)
        {
            help.push_back(i.second);
        }
        sort(help.begin(),help.end());
        int ans=0;
        for(int i=0; i<=help.size()-1; i++)
        {
            if(help[i]<=k)
            {
                k=k-help[i];
                help[i]=0;
            }
            else
            {
                help[i]=help[i]-k;
                break;
            }
        }
        
    int c=0;

    for(int i : help)
    {
        if(i!=0)
        c++;
    }

    return c;
        
    }
};