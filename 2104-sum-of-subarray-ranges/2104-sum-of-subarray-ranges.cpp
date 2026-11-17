class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;
    for(int i = 0;i<nums.size();i++) {
        int current_min = nums[i];
        int current_max = nums[i];
        for(int j = i+1;j<nums.size();j++) {
            current_max = max(current_max,nums[j]);
            current_min = min(current_min,nums[j]);
             sum += (current_max - current_min);
        }
    }
    return sum;    
    }
};