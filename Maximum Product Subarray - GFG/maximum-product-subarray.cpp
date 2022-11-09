//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> nums, int n) {
	    // code here
	    
	      long long int sum=1;
        long long int maxi=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            
            sum=sum*nums[i];
            maxi=max(maxi,sum);
            if(sum==0)
            {
                sum=1;
            }
            
        }
        
        sum=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            sum=sum*nums[i];
            maxi=max(sum,maxi);
            if(sum==0)
            {
                sum=1;
            }
        }
        
        
        return maxi;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends