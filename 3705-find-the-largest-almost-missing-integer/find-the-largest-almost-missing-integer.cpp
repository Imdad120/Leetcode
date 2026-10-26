class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();   
        int lar = -1;
        
        if(k == n) {
            for(int i : nums) {
                lar = max(lar, i);
            }
            return lar;
        }
        
        if(k == 1) {
            unordered_map<int, int> mp;
            
            for(int i : nums) {
                mp[i]++;
            }
           
            for(auto& i : mp) {
                if(i.second == 1) {
                    lar = max(lar, i.first);
                }
            }
            return lar;
        } 
        
        int val = nums[0];
        int f = 0;
        
        for(int i = 1; i <= n - 1; i++) {
            if(nums[i] == val) {
                f = 1;
                break;
            }
        }
      
        if(f == 0) {
            lar = max(lar, val);
        }

        int l = nums[n - 1];
        int p = 0;
        
        for(int i = 0; i <= n - 2; i++) {
            if(nums[i] == l) {
                p = 1;
                break;
            }
        }
        
        if(p == 0) {
            lar = max(lar, l);
        }

        return lar;
    }
};