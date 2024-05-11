// User function template for C++
class Solution {
public:
    int nthTermOfAP(int a1, int a2, int n) {
        a2 = a2 - a1;
        return a1 + (n - 1) * a2;
    }
}; 

// This class provides a function to calculate the nth term of an arithmetic progression (AP).
// It calculates the common difference between consecutive terms and then uses the formula: a1 + (n - 1) * d
// to find the nth term of the AP, where a1 is the first term, n is the position of the term, and d is the common difference.

