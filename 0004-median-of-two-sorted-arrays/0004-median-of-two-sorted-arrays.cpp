class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i = 0;
    int j = 0;
    vector<int>merge;
    double ans = 0;
    int tsize = nums1.size() + nums2.size();
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<=nums2[j]) {
            merge.push_back(nums1[i]);
            i++;
        }
        else {
            merge.push_back(nums2[j]);
            j++;
        }
    }
     while(i < nums1.size()) {
            merge.push_back(nums1[i]);
            i++;
        }

        while(j < nums2.size()) {
            merge.push_back(nums2[j]);
            j++;
        }
    if(tsize%2==0) {
      int mid = tsize/2;
      ans = (merge[mid] + merge[mid-1])/2.0;
    }
    else {
      ans = merge[tsize/2];
    }
    return ans;
    }
};