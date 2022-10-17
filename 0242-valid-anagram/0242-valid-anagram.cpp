class Solution {
public:
    bool isAnagram(string s, string t) {
    int has[26];
    for(int i=0;i<26;i++)
    {
        has[i]=0;
    }
    int hash[26];
    for(int i=0;i<26;i++)
    {
        hash[i]=0;
    }

    for(int i=0;i<s.size();i++)
    {
        s[i]=(int(s[i])-97);
        has[s[i]]++;
    }
    
    for(int i=0;i<t.size();i++)
    {
        t[i]=(int(t[i])-97);
        hash[t[i]]++;
    }
    int flag=true;
    int i=0;
    while(i<26)
    {
        if(has[i]!=hash[i])
        {
            flag=false;
        }
        i++;
    }

    return flag;
    
    }
};
        