class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    int i = 0;
    stack<int>st;
    for(int n=0;n<pushed.size();n++) {
        st.push(pushed[n]);
        while(i<popped.size() && !st.empty() && popped[i]==st.top()) {
            st.pop();
            i++;
        }
    }
    return st.empty();    
    }
};