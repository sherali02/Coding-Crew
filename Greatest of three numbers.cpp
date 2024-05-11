
class Solution {
public:
    int greatestOfThree(int A, int B, int C) {
        return max(A, max(B, C));
    }
}; 

// This class provides a function to find the greatest among three integers.
// It utilizes the max function from the standard library to compare the three integers and return the maximum value.
// The function first compares A and B to get the maximum of the first two numbers.
// Then, it compares this maximum with the third number to find the overall maximum among the three numbers.
