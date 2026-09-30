class Solution {
public:
    int getRev(int n) {
        int rev = 0;
        while(n>0) {
            int rem = n%10;
            rev =  rev*10 + rem;
            n/=10;
        }
        return rev;
    } 
    int minMirrorPairDistance(vector<int>& nums) {
    int n = nums.size();
    int result = INT_MAX;
    unordered_map<int,int>mpp;
    for(int i = 0;i<n;i++) {
        if(mpp.count(nums[i])) {
            result = min(result,i-mpp[nums[i]]);
        }
            mpp[getRev(nums[i])] = i;
        
    }
    return result==INT_MAX ? -1 : result;
    }
};