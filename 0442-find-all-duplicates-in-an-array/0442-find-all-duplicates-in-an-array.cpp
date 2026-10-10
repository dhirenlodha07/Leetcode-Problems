class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    vector<int>ans;
    map<int,int>mpp;
    for(int i : nums) {
    mpp[i]++;
    }
    for(auto it : mpp) {
        if(it.second>1) {
            ans.push_back(it.first);
        }
    } 
    return ans;   
    }
};