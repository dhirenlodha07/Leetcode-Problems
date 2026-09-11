class Solution {
public:
    bool backspaceCompare(string s, string t) {
    string s1 ="";
    string s2 ="";

    for(char ch1:s) {
        if(ch1=='#'){
            if(!s1.empty()){
            s1.pop_back();
            }
        }
        else {
            s1.push_back(ch1);
        }
    }
    for(char ch2:t) {
        if(ch2=='#') {
            if(!s2.empty()){
            s2.pop_back();
            }
        }
        else {
            s2.push_back(ch2);
        }
    }
    if(s1==s2) {
        return true;
    }
    else {
        return false;
    }    
    }    
    
};