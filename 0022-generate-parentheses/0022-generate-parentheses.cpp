class Solution {
public:
    
    vector<string> Solve(int open,int close,string op,vector<string> &v)
    {
        if(open==0 && close==0)
        {
            v.push_back(op);
            return v;
        }
        
        if(open!=0)
        {
            string op1;
            op1=op;
            op1.push_back('(');
            Solve(open-1,close,op1,v);
        }
        if(close>open)
        {
            
            string op2;
                op2=op;
            op2.push_back(')');
            Solve(open,close-1,op2,v);
            
        }
        return v;
        
    }
    
    
    vector<string> generateParenthesis(int n) {
     
        int open=n;
        int close=n;
        
        vector<string> a;
        string op;
        vector<string> v;
        a=Solve(open,close,op,v);
        return a;
        
        
        
    }
};