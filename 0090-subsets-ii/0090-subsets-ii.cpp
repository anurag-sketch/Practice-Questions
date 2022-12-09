class Solution {
public:
    
    vector<vector<int>> ans;
    
       vector<vector<int>> solve(vector<int> ip , vector<int> op)
    {
        
        if(ip.size()==0)
        {
            ans.push_back(op);
            return ans;
        }
        
        vector<int> op1;
        vector<int> op2;
        op1=op;
        op2=op;
        op2.push_back(ip[0]);
        
     ip.erase(ip.begin()+0);
        solve(ip,op1);
        solve(ip,op2);
        return ans;
    }
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<int> ip;
        ip=nums;
        vector<int> op;
        vector<vector<int>> fina;
        fina=solve(ip,op);
        sort(fina.begin(), fina.end());
        
        for(int i=0;i<fina.size();i++)
        {
            sort(fina[i].begin(),fina[i].end());
        }
        
        
        map<vector<int>,int> mp;
        for(int i=0;i<fina.size();i++)
        {
            mp[fina[i]]++;
        }
        vector<vector<int>> kima;
        map<vector<int>,int> :: iterator jp;
        
        for(jp=mp.begin();jp!=mp.end();jp++)
        {
            kima.push_back(jp->first);
        }
        sort(kima.begin(),kima.end());
        
        return kima;
        
        
        
    }
};