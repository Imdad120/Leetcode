class Solution {
public:

    int check(int mid, vector<int>& position)
    {
        int c = 1;
        int input = position[0];
        for (int i = 1; i <= position.size() - 1; i++)
        {
            if (position[i] - input >= mid)
            {
                c++;
                input = position[i];
            }
        }
        return c;
    }

    int maxDistance(vector<int>& position, int m) {
        int l = 1;
        sort(position.begin(), position.end());
        int n = position.size();
        int en = position[n - 1] - position[0];
        int ans = -1;
        while (l <= en)
        {
            int mid = l + (en - l) / 2;
            int count = check(mid, position);
            if (count >= m)
            {
                ans = mid;
                l = mid + 1;
            }
            else {
                en = mid - 1;
            }
        }
        return ans;
    }
};