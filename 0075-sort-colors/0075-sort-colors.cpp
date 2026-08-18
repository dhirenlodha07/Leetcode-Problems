class Solution {
public:
    void sortColors(vector<int>& nums) {
     int j,t;

    for(int i =1;i<nums.size();i++) {
        t = nums[i];
        for(j=i-1;j>=0;j--) {
            if(nums[j]>t){
             nums[j+1]=nums[j];
            }
            else {
                break;
            }
        }
         nums[j+1]=t;

    }    
    }
};