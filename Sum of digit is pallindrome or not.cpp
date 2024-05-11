// User function Template for C++
class Solution {
public:
    int isDigitSumPalindrome(int n) {
        int s = 0;
        string str = to_string(n);
        for(char c : str) {
            s += c - '0';
        }
        str = to_string(s);
        n = str.size();
        for(int i = 0; i < n / 2; i++) {
            if(str[i] != str[n - i - 1])
                return 0;
        }
        return 1;
    }
}; 

// This class provides a function to check if the digit sum of a number is a palindrome.
// It calculates the digit sum of the given number by converting it to a string and iterating through its digits.
// Then, it checks if the digit sum is a palindrome by comparing characters from the beginning and end of the string.
// If the digit sum is a palindrome, the function returns 1; otherwise, it returns 0.

