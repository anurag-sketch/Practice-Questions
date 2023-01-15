class Solution {
public:
    string greatestLetter(string s) {
            string xx ="";
        
        for(int i=0;i<s.size();i++)
        {
            if((int(s[i]) >= 97) && (int(s[i]) <=122))
            {
                for(int j=0;j<s.size();j++)
                {
                    if(i != j)
                    {
                        if(s[j] == toupper(s[i]))
                        {
                          xx.push_back(s[j]);  
                        }
                    }
                }
            }
            else
            {
                for(int j=0;j<s.size();j++)
                {
                    if(i!=j)
                    {
                        if(s[j] == tolower(s[i]))
                        {
                            xx.push_back(s[j]);
                        }
                    }
                }
            }
            
        }
        if(xx.size() == 0)
        {
            string k = "";
            return k;
        }
        else
        {
                sort(xx.begin(),xx.end());
        string ans;
        ans.push_back(toupper(xx[xx.size() - 1]));
        return ans;
        }
    
        
    }
};