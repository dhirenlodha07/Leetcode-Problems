class Solution {
public:
    int minMoves2(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int moves = 0;
    int median = nums[nums.size()/2];

    for(int i : nums)  {
        moves += abs(i-median);
    }
    return moves;    
    }
};