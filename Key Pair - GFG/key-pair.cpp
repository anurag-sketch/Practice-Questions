//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    
	    vector<int> ans;
	    for(int i=0;i<n;i++)
	    {
	        ans.push_back(arr[i]);
	    }
	    
	    sort(ans.begin() , ans.end());
	    
	   int i=0;
	   int j=ans.size() - 1;
	   while(i<j)
	   {
	       if(ans[i] + ans[j] == x)
	       {
	           return true;
	       }
	       else if( ans[i] + ans[j] < x)
	       {
	           i++;
	       }
	       else
	       {
	           j--;
	       }
	   }
	   return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends