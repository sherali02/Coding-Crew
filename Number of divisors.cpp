//User function Template for C++
class Solution
{
public:
    int count_divisors(int n)
    {
        int c = 0;
        for(int i = 1; i <= sqrt(n); i++) {
            if(i * i == n && i % 3 == 0)
                c++;
            else if(n % i == 0) {
                if(i % 3 == 0)
                    c++;
                if(n / i % 3 == 0)
                    c++;
            }
        }
        return c;
    }
}; 

// This function counts the number of divisors of a given number, which are divisible by 3.
// It iterates through numbers from 1 to the square root of n, checking if each divisor is divisible by 3.
// Finally, it returns the count of divisors divisible by 3.

