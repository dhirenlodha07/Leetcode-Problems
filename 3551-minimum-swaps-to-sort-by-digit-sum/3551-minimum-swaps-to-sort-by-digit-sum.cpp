class Solution {
public:
    int sumofdigits(int x) {
        int sum = 0;
        while(x>0) {
            int digit = x%10;
            sum+=digit;
            x=x/10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
    int n = nums.size();
    vector<pair<pair<int,int>,int>>sumsorted;
    for(int i=0;i<nums.size();i++) {
        sumsorted.push_back({{sumofdigits(nums[i]),nums[i]},i});
    }
    sort(sumsorted.begin(), sumsorted.end());
    vector<bool> visited(n, false);
        int number_of_cycles = 0;
        for(int i = 0; i < n; i++) {
            if(visited[i]) {
                continue;
            }
            number_of_cycles++;
            int j = i;
            while(!visited[j]) {
                visited[j] = true;
                j = sumsorted[j].second; 
            }
        }
        return n - number_of_cycles;
    }
};