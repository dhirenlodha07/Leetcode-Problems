class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
    vector<string>ans;
    int i=0;
    int j=1;
    while(j<=n && i<target.size()) {
        if(target[i]==j) {
            ans.push_back("Push");
            i++;
        }
        else {
            ans.push_back("Push");
            ans.push_back("Pop");
        }
        j++;
    }
    return ans;
    }
};