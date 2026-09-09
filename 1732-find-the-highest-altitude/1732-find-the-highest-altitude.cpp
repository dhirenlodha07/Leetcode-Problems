class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int sum = 0;
    int f_ans  = 0;
    for(int i=0;i<gain.size();i++) {
        sum+=gain[i];
       int ans = max(ans,sum);
       f_ans = ans;
    }
    if(f_ans<0) {
        return 0;
    }
    return f_ans;    
    }
};