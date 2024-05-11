class Solution {
  public:
    long long seriesSum(int n) {
        // code here
        long long s,m=n;
        s=m*(m+1)/2;
        return s;
    }
};

//Explanation:

// To find the sum of the first 'n' natural numbers, 
// we utilize the mathematical formula: sum = n * (n + 1) / 2
// However, as the input data is of type 'int', 
// the evaluation of this formula might result in integer overflow.
// To mitigate this risk, we typecast 'n' to 'long long' 
// before performing the calculation.
