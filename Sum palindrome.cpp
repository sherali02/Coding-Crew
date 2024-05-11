// User function Template for C++
class Solution {
public:
    bool ispalind(long long n){
        string s=to_string(n),r=to_string(n);
        reverse(s.begin(),s.end());
        if(s==r)return true;
        return false;
    }
    
    long long isSumPalindrome(long long n){
        int i=5;
        if(ispalind(n))return n;
        while(i--){
            string s=to_string(n);
            string r=s;
            reverse(r.begin(),r.end());
            if(ispalind(stol(r)+stol(s)))return stol(r)+stol(s);
            n=stol(r)+stol(s);
        }
        return -1;
    }
}; 

// This class provides functions to check if a number is a palindrome and to find the palindrome obtained
// by adding the reverse of a number to itself.
// The ispalind function checks if a number is a palindrome by comparing it with its reverse.
// The isSumPalindrome function first checks if the given number is a palindrome.
// If it is, it returns the number itself. If not, it tries adding the number to its reverse and checks if the sum is a palindrome.
// It repeats this process up to 5 times and returns the palindrome sum if found, otherwise -1.

