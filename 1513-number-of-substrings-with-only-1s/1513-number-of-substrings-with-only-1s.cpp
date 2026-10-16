class Solution {
public:
    int numSub(string s) {
        long long ans = 0;
        long long count = 0;

    for(int i = 0;i<s.length();i++) {
        if(s[i]=='1') {
            count++;
        }
        else {
            ans+=count*(count+1)/2;
            count = 0;
        }
    }
    ans += count * (count + 1) / 2;
    return ans%(int)(1e9+7);    
    }
};