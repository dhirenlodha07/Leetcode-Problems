class Solution {
public:
    bool detectCapitalUse(string s) {
        int count = 0;
        if(s.length()==1) {
            return true;
        }
    
    for(int i=0;i<s.length();i++) { 
        if(s[i]>=65 && s[i]<=90) {
            count++;
        }

    }
    if(count==s.length() || count==0 || (count==1 && s[0]>=65 && s[0]<=90)) {
        return true;
    } 
    return false;   
    }
};