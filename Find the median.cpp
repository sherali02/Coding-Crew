class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int n=v.size();
		    if(n&1){
		        return v[n/2];
		    }
		    
		        return (v[n/2]+v[(n-1)/2])/2;
		}
};

// To find the median of a vector of integers, 
// we first sort the vector in ascending order.
// Then, we check if the size of the vector is odd or even.
// If the size is odd, we return the middle element.
// If the size is even, we return the average of the two middle elements.
