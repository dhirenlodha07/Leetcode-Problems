class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;
    for(int i = 1;i<=nums.size();i++) {
        if(n%i==0) {
            int product = nums[i-1]*nums[i-1];
            ans += product;
        }
    }
    return ans;   
    }
};