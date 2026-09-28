class Solution {
public:
    int findLucky(vector<int>& arr) {
    map<int,int>mpp;
    for(int i:arr) {
        mpp[i]++;
    }
    int luckynum = -1;
    for(auto &it : mpp) {
        if(it.first == it.second) {
            luckynum = max(luckynum,it.first);
        }
    }
    return luckynum;
    }
};