class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    vector<int>ans;
    int n = arr.size();
    int maxRight = -1;
   for (int i = n - 1; i >= 0; i--) {
            ans.push_back(maxRight);             
            maxRight = max(maxRight, arr[i]); 
   }   
   reverse(ans.begin(),ans.end());
    return ans;
    }
};