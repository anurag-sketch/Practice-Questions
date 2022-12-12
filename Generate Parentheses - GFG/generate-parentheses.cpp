//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    
    vector<string> ans;
    void fun(int open,int close,string op)
    {
        if(open==0 && close==0)
        {
            ans.push_back(op);
            return;
        }
        
        if(open!=0)
        {
            string op1;
            op1=op;
            op1.push_back('(');
            fun(open-1,close,op1);
        }
        if(close>open)
        {
            string op2;
            op2=op;
            op2.push_back(')');
            fun(open,close-1,op2);
        }
        return ;
    }
    
    
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        int open=n;
        int close=n;
        string op;
        fun(open,close,op);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends