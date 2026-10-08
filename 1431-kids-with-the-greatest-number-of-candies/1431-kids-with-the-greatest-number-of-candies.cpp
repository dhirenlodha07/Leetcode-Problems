class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extracandies) {
    vector<bool>ans;
    int max = candies[0];
    for(int i=0;i<candies.size();i++) {
        if(max<candies[i]) {
            max = candies[i];
        }
    }
    for(int i=0;i<candies.size();i++) {
        if(candies[i]+extracandies >= max) {
            ans.push_back(true);
        }
        else {
            ans.push_back(false);
        }
    }
    return ans;    
    }
};