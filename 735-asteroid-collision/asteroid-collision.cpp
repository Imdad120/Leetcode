class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(int i : asteroids) {
            bool f = true;
            while(!s.empty() && i < 0 && s.top() > 0) {
                if(s.top() < -i) {
                    s.pop();
                }
                else if(s.top() == -i) {
                    s.pop();
                    f = false;
                    break;
                }
                else {
                    f = false;
                    break;
                }
            }
            if(f) {
                s.push(i);
            }
        }
        vector<int> ans(s.size());
        for(int i = s.size() - 1; i >= 0; --i) {
            ans[i] = s.top();
            s.pop();
        }
        return ans;
    }
};