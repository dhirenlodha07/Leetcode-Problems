class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    map<int,int>mpp;
    for(int i : arr) {
        mpp[i]++;
    }
    set<int>st;
    for(auto pair : mpp) {
        st.insert(pair.second);
    }
    return st.size() == mpp.size();
    }
};