class Solution {
    int binarySearch(int target, vector<int>& nums2, int l, int h)
    {
        int ans = -1;
        while(l <= h)
        {
            int mid = l + (h - l) / 2;
            if(nums2[mid] >= target)
            {
                ans = mid;
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }

        }
        return ans;

    }


public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        // APPROACH 1-> TWO POINTERS APPROACH
    //THIS APPROACH WILL GIVE YOU TIME LIMIT EXCEEDED
    //     int d = 0;
    //     for(int i=0; i<=nums1.size()-1; i++)
    //     {
    //         for(int j=i; j<=nums2.size()-1; j++)
    //         {
    //             if(nums1[i]>nums2[j])
    //             break;
    //             else if(nums1[i]<=nums2[j])
    //             {
    //                 d=max(d,j-i);
    //             }
    //         }
    //     }
    // return d;

    //APPROACH 2->USING BINARY SEARCH
        int d = 0;
        int n2 = nums2.size();
        for(int i = 0; i < nums1.size(); i++)
        {
            int j = binarySearch(nums1[i], nums2, i, n2 - 1);
            if(j >= i)
            d = max(d, j - i);
        }
        return d;
        
    }
};