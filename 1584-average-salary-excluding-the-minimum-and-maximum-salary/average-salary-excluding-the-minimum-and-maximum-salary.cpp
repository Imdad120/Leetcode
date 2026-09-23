class Solution {
public:
    double average(vector<int>& salary) {
        int n= salary.size();
     double sum=0;
     for(int i : salary)
     {
        sum+=i;
     }
     int minm=INT_MAX;
     int maxm=INT_MIN;
     for(int i : salary)
     {
        minm=min(minm,i);
        maxm=max(maxm,i);
     }
     double a=sum-(minm+maxm);
    double result=a/(n-2);
     return result;


        
    }
};