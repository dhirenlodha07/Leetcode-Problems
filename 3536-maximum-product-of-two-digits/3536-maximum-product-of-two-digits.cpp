class Solution {
public:
    int maxProduct(int n) {
    int digit = 0;
    vector<int>nums;
    while(n>0) {
        int digit = n%10;
        nums.insert(nums.begin(),digit);
        n = n/10;

    }
        if(nums.size()<2){
            return 0;
        }

    int mul=1;
    int ans = 0;
    for(int i=0;i<nums.size();i++) {
        for(int j=i+1;j<nums.size();j++) {
            mul = nums[i]*nums[j];
            ans = max(ans,mul);

        }
    }
    return ans;    
    }
};