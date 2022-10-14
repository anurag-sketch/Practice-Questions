class Solution {
public:
    
    string is(string x)
    {
    if(x.size()>0)
    {
    int s=x.size()-1;
    int i=0;
    bool flag=true;
        while(i<=s)
        {
            if(x[i]!=x[s])
            {
                flag=false;
            }
            i++;
            s--;
        }
        if(flag==true)
        {
            return x;
        }
        
        
    }
        string a="";
        return a;
   }
        
        
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0;i<words.size();i++)
        {
            string s=is(words[i]);
            if(s.size()>0)
            {
            return s;
            }
        }
        
        string e="";
        return e;
        
        
    }
};