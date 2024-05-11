// User function Template for C++
class Solution{
public:
    long long nPr(int n, int r){
        long long ans=1;
        for(long long int i=n;i>n-r;i--){
            ans*=i;
        }
        return ans;
    }
}; 

// This class provides a function to calculate the permutation of n items taken r at a time.
// It iteratively multiplies numbers from n down to (n - r + 1) to compute the permutation value.

