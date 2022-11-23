class Solution {
public:
    bool halvesAreAlike(string s) {
        
        string s1;
          unordered_map<char,int> mp1;
        for(int i=0;i<(s.size()/2);i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                   mp1[s[i]] ++;         
            }
       
            s1.push_back(s[i]);
        }
        string s2;
         unordered_map<char,int> mp2;
        for(int i=(s.size()/2);i<s.size();i++)
        {
              if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                   mp2[s[i]] ++;         
            }
       
            s2.push_back(s[i]);
        }
        
        unordered_map<char,int> :: iterator ip1;
        unordered_map<char,int> :: iterator ip2;
        
        int count1=0;
        int count2=0;
        
        for(ip1=mp1.begin() ; ip1!=mp1.end();ip1++)
        {
            count1 = ip1->second +count1;
        }
           for(ip2=mp2.begin() ; ip2!=mp2.end();ip2++)
        {
            count2 = ip2->second +count2;
        }
        
        if(count1 == count2)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
      
       
        
        
        
    }
};