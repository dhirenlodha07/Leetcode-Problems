class Solution {
public:
    int addMinimum(string word) {
    int blocks = 1;
    for(int i = 1;i<word.length();i++) {
        if(word[i]<=word[i-1]) {
            blocks++;
        }
    }
    return (3*blocks)-word.length();
    }
};