
class Solution{   
public:
    string oddEven(int N){
        if(N & 1)
            return "odd";
        else
            return "even";
    }
}; 

// This class provides a function to determine whether a given number is odd or even.
// It uses bitwise AND operation with 1 to check if the least significant bit of the number is set,
// which indicates whether the number is odd or even.
// If the result of the operation is non-zero, the number is odd; otherwise, it's even.
