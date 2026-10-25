class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
  sort(nums.begin(), nums.end());
        long long n = nums.size();
        
        long long total = n * (n - 1) / 2;

        long long lesslower = 0;
        int i = 0;
        int j = n - 1;
        while (i < j) {
            if (nums[i] + nums[j] < lower) {
                lesslower += (j - i);
                i++;
            } else {
                j--;
            }
        }
        long long greaterupper = 0;
        i = 0;
        j = n - 1;
        while (i < j) {
            if (nums[i] + nums[j] > upper) {
                greaterupper += (j - i);
                j--;
            } else {
                i++;
            }
        }
        return total - lesslower - greaterupper;   
    }
};