class Solution { 
public: 
    long long maximumSumOfHeights(vector<int>& heights) { 
        int n = heights.size(); 
        long long ans = 0; 
        
        for(int i = 0; i <= n - 1; i++) // to traverse each index as a peak 
        { 
            long long sum = heights[i]; 
            int check = heights[i]; 
            
            for(int j = i - 1; j >= 0; j--) 
            { 
                check = min(check, heights[j]); 
                sum += check; 
            } 
            
            check = heights[i]; 
            for(int k = i + 1; k <= n - 1; k++) 
            { 
                check = min(check, heights[k]); 
                sum += check; 
            } 
            
            ans = max(sum, ans); 
        } 
        
        return ans; 
    } 
};
