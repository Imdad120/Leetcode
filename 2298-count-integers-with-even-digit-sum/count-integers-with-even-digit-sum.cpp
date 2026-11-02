class Solution {
    int sum(int n)
    {
        int s=0;
        while(n>0)
        {
            int d=n%10;
            s+=d;
            n=n/10;
        }
        return s;
    }
public:
    int countEven(int num) {
        int c=0;
       for(int i=1; i<=num; i++)
       {
            int ans=sum(i);
            if(ans%2==0)
            c++;
       }
        return c;
        
    }
};