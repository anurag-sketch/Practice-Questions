class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        int mn=INT_MAX;
        int si = searchWord.size();
        string k = sentence.substr(0,si);
        int count=0;
        
        if(searchWord == k )
        {
            return 1;
        }
        
        for(int i=0;i<sentence.size();i++)
        {
            
            if(sentence[i] == ' ')
            {
                count++;
                string a = sentence.substr(i+1,si);
                if(a == searchWord)
                {
                    
                    return count+1;
                }
            }
            
        }
        return -1;
        
    }
};