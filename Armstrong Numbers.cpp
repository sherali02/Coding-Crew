class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        string s=to_string(n);
        int x=pow(s[0]-'0',3)+pow(s[1]-'0',3)+pow(s[2]-'0',3);
        if(x==n)return "Yes";
        return "No";
        
    }
};

// To determine if a number is an Armstrong number,
// we first convert it to a string for individual digit manipulation.
// Then, we calculate the sum of the cubes of its digits.
// If this sum equals the original number, it's an Armstrong number, and we return "Yes".
// Otherwise, we return "No".
