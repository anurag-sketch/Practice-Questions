//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	    
	    
	    
	            if(s.size()==0)
        {
            return true;
        }
        int i=0;
        bool flag=true;
        vector<char> ans;
              transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        
       for (int i = 0; i < s.size(); i++)
{
    if ((int(s[i]) <= 122 && int(s[i]) >= 97) || (int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i])>=48 && int(s[i])<=57))
    {
        ans.push_back(s[i]);
    }
}
        
        int k=ans.size()-1;
       int j=0;
        while(j<k)
        {
            if(ans[k]!=ans[j])
            {
                flag=false;
            }
           j++;
            k--;
        }
     if(flag==true)
     {
         return true;
     }
    else
    {
        return false;
    }
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends