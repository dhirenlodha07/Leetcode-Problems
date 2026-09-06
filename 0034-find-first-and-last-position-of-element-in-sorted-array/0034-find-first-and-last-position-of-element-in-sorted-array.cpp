class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int minidx=-1;
    int maxidx=-1;
    int n = nums.size();

    int st = 0;
    int end = n-1;


    while (st<=end) {
    int mid = st + (end-st)/2;

    if(nums[mid]==target) {
            minidx =  mid;
            end = mid-1;
        }
    else if(nums[mid]<target) {
            st = mid+1;
        }
    else {
            end = mid-1;
        }

    }
    st =0;
    end = n-1;
    while (st<=end) {
    int mid = st + (end-st)/2;

    if(nums[mid]==target) {
            maxidx =  mid;
            st = mid+1;
        }
    else if(nums[mid]<target) {
            st = mid+1;
        }
    else {
            end = mid-1;
        }
    }
return {minidx,maxidx};
    }
};