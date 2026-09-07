class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
    int n = nums.size();    
    int minm = nums[0];
    int maxm  = nums[0];
    int minidx =  0;
    int maxidx = 0;
    if(n==1) {
        return 1;
    }
    for(int i=0;i<n;i++) {
        if(minm>nums[i]) {
        minm = nums[i];
        minidx = i;
        }
    }
    for(int i=0;i<n;i++) {
        if(maxm<nums[i]) {
        maxm = nums[i];
        maxidx = i;
        }
    }

    if(max(minidx,maxidx)+1<=n - min(minidx,maxidx) && max(minidx,maxidx)+1<=(min(minidx,maxidx) + 1) + (n - max(minidx,maxidx))) {
        return max(minidx,maxidx)+1;
    }
    else if(n - min(minidx,maxidx)<max(minidx,maxidx)+1 && n-min(minidx,maxidx)<=(min(minidx,maxidx) + 1) + (n - max(minidx,maxidx)) ) {
        return n - min(minidx,maxidx);
    }
    else{
        return (min(minidx,maxidx) + 1) + (n - max(minidx,maxidx));
    }

    }
};