class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        stack <int > st;
        for(int right=0; right < height.size();right++){
            while(!st.empty()&&height[right]>height[st.top()]){
                int cur =st.top();
                st.pop();
                if(st.empty())
                break;
                int left=st.top();
                int distance= right-left-1;
                int bounded_height=min(height[right],height[left])-height[cur];
                ans += distance * bounded_height;
            }
            st.push(right);
        }
        return ans;
        
    }
};