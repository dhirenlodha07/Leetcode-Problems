class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int>uniquenums;
    for(int i =0;i<digits.size();i++) {
        for(int j=0;j<digits.size();j++) {
            for(int k=0;k<digits.size();k++) {
                if(j!=i && k!=j && k!=i){
             int hundreds =  digits[i];

             if(hundreds!=0) {
                int tens = digits[j];
                int ones = digits[k];

                int nums = hundreds*100 + tens*10 + ones;

                if(nums%2==0) {
                    uniquenums.insert(nums);
                }
             }
            }
            }
        }
    }
   vector<int>demo(uniquenums.begin(),uniquenums.end());
   sort(demo.begin(),demo.end());
    return demo;  
    }
};