class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int>uniquenums;
    for(int i=0;i<digits.size();i++) {
        for(int j=0;j<digits.size();j++) {
         for(int k=0;k<digits.size();k++) {
           if(i!=j && j!=k && k!=i) {
            int hundreds =  digits[i];

            if(hundreds != 0) {
                int tens = digits[j];
                int ones = digits[k];
                int num =  hundreds*100 +  tens*10 + ones;
                if(num%2==0) {
                    uniquenums.insert(num);
                }
            }
           }
         }
        }
    } 
    return uniquenums.size();   
    }
};