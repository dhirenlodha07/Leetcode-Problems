class Solution {
public:
    bool checkString(string s) {
    int beforeb=0;
    int afterb=0;
    int b1index=s.length();
    for(int i = 0;i<s.length();i++) {
        char ch = s[i];
        if(ch=='a') {
            beforeb++;
        }
        else{
            b1index=i;
            break;
        }
    }
    for(int i = b1index+1;i<s.length();i++){
        char ch = s[i];
        if(ch=='a'){
            afterb++;
        }
    }
    if(afterb>0) return false;

    return true;   
    }
};