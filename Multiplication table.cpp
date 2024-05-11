//User function Template for C++
class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int> a;
        for(int i=1;i<=10;i++){
            a.push_back(N*i);
        }
        return a;
    }
}; 

// This function generates a table of multiples of N from 1 to 10.
// It initializes an empty vector to store the table values.
// Then, it iterates from 1 to 10, calculates the multiples of N for each iteration, and stores them in the vector.
// Finally, it returns the vector containing the generated table.

