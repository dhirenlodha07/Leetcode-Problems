class Solution {
public:
    int minAddToMakeValid(string s) {
    int opencount = 0;
    int closecount = 0;
    for(char ch : s) {
        if(ch == '(') {
            closecount++;
        }
        else {
            if(closecount>0){
            closecount--;
            }
            else {
                opencount++;
            }
        }
    }
    return opencount+closecount;    
    }
};