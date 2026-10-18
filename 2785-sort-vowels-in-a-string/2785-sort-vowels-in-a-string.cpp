class Solution {
public:
    string sortVowels(string s) {
    string str = "";
    for(int i = 0;i<s.length();i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
           s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
            str.push_back(s[i]);
        }
    }
    sort(str.begin(),str.end());
    int j = 0;
    for(int i = 0;i<s.length();i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
           s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
            s[i]=str[j];
            j++;
        }
    }
    return s;    
    }
};