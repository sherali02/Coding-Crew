class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    float s=0;
	    vector<float>ans;
	   // float i=1;
	    for(int i=0;i<n;i++){
	        s+=arr[i];
	        ans.push_back(s/(i+1));
	    }
	    return ans;
	}
};


// To compute the average of elements in a streaming fashion,
// we maintain a running sum of the elements seen so far.
// For each element, we add it to the running sum and compute the average.
// The computed average is stored in a vector and returned at the end.
