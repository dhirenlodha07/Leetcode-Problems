class Solution {
public:
    int gcdOfOddEvenSums(int n) {
    int sumOdd = n*n;
    int sumEven = n*(n+1);

    int gcd=1;
    for(int i=1;i<=min(sumOdd,sumEven);i++) {
        if(sumOdd%i==0 && sumEven%i==0) {
            gcd = i;
        }
    }
    return gcd;  
    }
};