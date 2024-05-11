class Solution {
public:
    int _gcd(int a, int b) {
        if (b == 0) 
            return a;
        return _gcd(b, a % b);
    }

    int gcd(int a, int b) {
        return _gcd(a, b);
    }
}; 

// This class provides functions for calculating the greatest common divisor (GCD) of two integers.
// The _gcd function recursively calculates the GCD using the Euclidean algorithm.
// The gcd function is a wrapper function that calls _gcd with the given integers.
