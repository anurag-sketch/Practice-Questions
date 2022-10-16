class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag=true;
        int count=0;
        for(int i=0;i<word.size();i++)
        {
            if(int(word[i])>=65 && int(word[i])<=90)
            {
                flag=true;
                count++;
            }
        }
        bool flag1=true;
        int count1=0;
        for(int i=0;i<word.size();i++)
        {
            if(int(word[i])>=97 && int(word[i])<=122)
            {
                flag1=true;
                count1++;
            }
        }
        bool flag2=true;
        int count2=0;
        for(int i=1;i<word.size();i++)
        { 
             if(int(word[0])>=65 && int(word[0])<=90)
             {
                 flag2=false;
             }
               if(int(word[i])>=97 && int(word[i])<=122)
               {
                   count2++;
               }
            
        }
        
        if(flag2==false && count2==word.size()-1)
        {
            return true;
        }
        else if(flag==true && count==word.size())
        {
            return true;
        }
        else if(flag1==true && count1==word.size())
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
        
        
        
        
    }
};