class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
    string s2="";
    int space1 = 0;
    for(int i=0;i<s.length();i++) {
        if(space1<spaces.size()&&i==spaces[space1]) {
            s2.push_back(' ');
            space1++;
        }
        s2.push_back(s[i]);

    }
    return s2;    
    }
};