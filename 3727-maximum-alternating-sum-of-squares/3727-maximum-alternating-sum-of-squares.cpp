class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    long long sum = 0;
    for(int i = 0;i<nums.size();i++) {
        nums[i]=abs(nums[i]);
        sum+=(long long)nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
    int half = nums.size()/2;
    for(int i = 0;i<half;i++) {
        sum-=(long long)nums[i]*nums[i]*2;
    }
    return sum;    
    }
};