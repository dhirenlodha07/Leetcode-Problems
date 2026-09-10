class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
   int l=0,r=0;
   int sum =  0;
   int minlen = INT_MAX;
   int n =  nums.size();

   while(r<n)  {
     sum+=nums[r];
     while(sum>=target) {
        minlen =  min(minlen,r-l+1);
        sum = sum-nums[l];
        l++;
     }
    
     r++;
   }
   if(minlen==INT_MAX) {
    return 0;
   }
   else {
    return minlen;
   }
    }
};