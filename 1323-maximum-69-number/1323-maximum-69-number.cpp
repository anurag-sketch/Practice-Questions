class Solution {
public:
    int maximum69Number (int num) {
        string s;
        s=to_string(num);
        int count=0;
        
            
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '6' && count==0)
            {
                count++;
                s[i]='9';
            }
        }
        
        
    
    
        int ans;
        ans=stoi(s);
        return ans;
        
    }
};