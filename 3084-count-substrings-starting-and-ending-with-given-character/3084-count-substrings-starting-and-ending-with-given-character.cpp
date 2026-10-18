class Solution {
public:
    long long countSubstrings(string s, char c) {
    long long count = 0;
    long long subcount = 0;
    for(int i = 0;i<s.length();i++) {
        if(s[i]==c) {
            count++;
            subcount+=count;
        }
        
    }
    return subcount;
    }
};