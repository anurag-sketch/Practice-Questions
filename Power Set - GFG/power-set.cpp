//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	  vector<string> ans;
    void kk(string ip,string op)
    {
        if(ip.size() == 0)
        {
            ans.push_back(op);
            return ;
        }
        string op1=op;
        string op2=op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        kk(ip,op1);
        kk(ip,op2);
        return ;
    }
	
	
		vector<string> AllPossibleStrings(string s){
		    // Code here
		     string ip=s;
        string op;
        
        kk(ip,op);
        sort(ans.begin() , ans.end());
        vector<string> kama;
        for(int i=1;i<ans.size();i++)
        {
            kama.push_back(ans[i]);
        }
        return kama;
		    
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends