class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        st.push(-1);

        int max_area = 0;
        int n = heights.size();

        for (int i = 0; i < n; i++) {

            while (st.top() != -1 && heights[st.top()] >= heights[i]) {

                int curr_bar_height = heights[st.top()];
                st.pop();

                int curr_width = i - st.top() - 1;

                max_area = max(max_area, curr_bar_height * curr_width);
            }

            st.push(i);
        }

        while (st.top() != -1) {

            int curr_bar_height = heights[st.top()];
            st.pop();

            int curr_width = n - st.top() - 1;

            max_area = max(max_area, curr_bar_height * curr_width);
        }

        return max_area;
    }
};