class Solution {
public:
    int minSwaps(string s) {
    int countopen = 0;
    int countclose = 0;
    for(char ch:s) {
        if(ch=='[') {
            countopen++;
        }
       else if(countopen>0) {
        countopen--;
       }
    }
    
    return (countopen+1)/2;    
    }
};