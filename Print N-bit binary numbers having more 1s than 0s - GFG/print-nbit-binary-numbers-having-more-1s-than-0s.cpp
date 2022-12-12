//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

vector<string> ans;

void fun(int one,int zero,string op,int N)
{
    if(op.size() == N)
    {
        ans.push_back(op);
        return ;
    }
    
    if(one != 0)
    {
        string op1;
        op1=op;
        op1.push_back('1');
        fun(one-1,zero,op1,N);
    }
    if(zero>one)
    {
        string op2;
        op2=op;
        op2.push_back('0');
        fun(one,zero-1,op2,N);
    }
    return;
}

	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    int one=N;
	    int zero=N;
	    string op;
	    fun(one,zero,op,N);
	    return ans;
	    
	    
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends