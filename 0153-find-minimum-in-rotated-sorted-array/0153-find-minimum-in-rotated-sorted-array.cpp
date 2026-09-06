class Solution {
public:
    int findMin(vector<int>& nums) {
    int st = 0;
    int n = nums.size();
    int end = n-1;
    int ans =0;

    while(st<=end) {
    int mid = st + (end-st)/2;
    if(nums[mid]>nums[end] ) {
        st=mid+1;
    }
    else if(nums[mid]<nums[end]){
        end = mid;
    }
    else{
        ans=nums[mid];
        break;
    }
    }
    return ans;
    }
};