class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i : nums)
        {
            if(freq.count(i))
            freq[i]++;
            else
            freq[i]=1;
        }
        int c=0;
        for(auto i : freq)
        {
            if(i.second==3)
            {
                int j=-1;
                int k=-1;
                int l=-1;
                for(int p=0; p<=nums.size()-1;p++)

                {
                    if(nums[p]==i.first)
                    {
                        if(j==-1)
                    {
                        j=p;
                        
                    }
                    else if(k==-1)
                    {
                        k=p;
                    }
                    else{
                        l=p;
                    }

                 }

               

                }

                 if((k-j)==(l-k))
                c++;
            }

            
        }


        return c;
    }
};