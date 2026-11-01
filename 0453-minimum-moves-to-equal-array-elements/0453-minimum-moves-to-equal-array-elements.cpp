class Solution {
public:
    int minMoves(vector<int>& nums) {
    int sum = 0;
    int minEle = nums[0];
    for(int i = 0;i<nums.size();i++) {
        sum+=nums[i];
        if(minEle>nums[i]) {
            minEle = nums[i];
        }
    }
    return sum - nums.size()*minEle;   
    }
};