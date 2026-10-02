class Solution {
private:
    void backtrack(int openN, int closedN, int n, vector<char>& st, vector<string>& res) {
        if (openN == closedN && closedN == n) {
            res.push_back(string(st.begin(), st.end()));
            return;
        }

        if (openN < n) {
            st.push_back('(');
            backtrack(openN + 1, closedN, n, st, res);
            st.pop_back();
        }

        if (closedN < openN) {
            st.push_back(')');
            backtrack(openN, closedN + 1, n, st, res);
            st.pop_back();
        }
    }
    public:
    vector<string> generateParenthesis(int n) {
    vector<string> res;
        vector<char> st; 
        backtrack(0, 0, n, st, res);
        return res;
    }
};