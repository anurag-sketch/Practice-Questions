class Solution {
public:
    
 vector<string> ans;
    
    void Solve(string ip, string op, vector<string>& ans)
    {
        
        if(ip.length()==0)
        {
            ans.push_back(op);
            return ;
        }
    
       
         
        if(isalpha(ip[0]))
        {
         
            string op1;
            string op2;
            op1=op;
            op2=op; 
    
            op1.push_back(toupper(ip[0]));
            op2.push_back(tolower(ip[0]));
              ip.erase(ip.begin()+0);
              Solve(ip,op1,ans);
             Solve(ip,op2,ans);
        }
        else
        { 
            string op1;
            op1=op;
            op1.push_back(ip[0]);
            ip.erase(ip.begin()+0);
            
            Solve(ip,op1,ans);
            
        }
        
        
        return ;
        
    }
    
     
    
    vector<string> letterCasePermutation(string s) 
    {
        
     string ip;
        
        ip=s;
          Solve(ip,"",ans);
        return ans;
          
    }
};