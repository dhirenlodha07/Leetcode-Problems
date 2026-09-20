class Solution { // a slight variation with the prev problem 84 just shifting the bar of histogram downwards in psum
public:
      int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxArea = 0;
        
        for(int i = 0; i < n; i++) {
            while(!st.empty() && heights[st.top()] > heights[i]) {
                int element = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty() ? -1 : st.top();
                maxArea = max(maxArea, heights[element] * (nse - pse - 1));
            }
            st.push(i);
        }
        
        while(!st.empty()) {
            int nse = n;
            int element = st.top();
            st.pop();
            int pse = st.empty() ? -1 : st.top();
            maxArea = max(maxArea, heights[element] * (nse - pse - 1));
        }  
        
        return maxArea;  
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
     if (matrix.empty() || matrix[0].empty()) return 0;
        
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> psum(n, vector<int>(m, 0));
        int maxArea = 0;

        for (int j = 0; j < m; j++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += matrix[i][j] - '0';
                if (matrix[i][j] == '0') {
                    sum = 0;
                }
                psum[i][j] = sum;
            }
        }

        for (int i = 0; i < n; i++) {
            maxArea = max(maxArea, largestRectangleArea(psum[i]));
        }

        return maxArea;   
    }
};