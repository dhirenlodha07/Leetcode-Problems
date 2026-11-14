class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
    int min_sum = INT_MAX;
    int n = nums.size();

    for(int i = 0;i<n;i++) {
        int currsum = 0;
        for(int j = i;j<n;j++)  {
            currsum += nums[j];
            int currlength = j-i+1;

            if(currlength > r) break;
            if(currlength>=l && currsum>0) {
                min_sum = min(min_sum,currsum);
            }
        }
    }
    return min_sum == INT_MAX ? -1 : min_sum;   
    }
};