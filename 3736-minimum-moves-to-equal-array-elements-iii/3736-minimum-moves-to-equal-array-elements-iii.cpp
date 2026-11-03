class Solution {
public:
    int minMoves(vector<int>& nums) {
    int maxele = nums[0];
    int sum=0;
    for(int i=0;i<nums.size();i++) {
       sum+=nums[i];
        if(maxele<nums[i]) {
            maxele = nums[i];
        }
    }
    return nums.size()*maxele-sum;    
    }
};