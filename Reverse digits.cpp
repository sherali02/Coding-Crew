class Solution
{
public:
    long long int reverse_digit(long long int n)
    {
        string s = to_string(n);
        reverse(s.begin(), s.end());
        long long int x = stoll(s);
        return x;
    }
}; 

// This class provides a function to reverse the digits of a given number.
// It first converts the number to a string to facilitate reversal.
// Then, it reverses the string representing the number using the reverse function.
// Finally, it converts the reversed string back to a long long int and returns it.

