class Solution {
public:
    string truncateSentence(string sentence, int k) {
        
        int spaces=0;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i] ==' ') spaces++;
        }
        if(spaces == k-1) return sentence;
        else
        {
            
        
          int count =0;
        int index;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i] == ' ')
            {
                if(count<k)
                {
                    index=i;
                    count++;
                }
            }
        }
        string ans;
        ans = sentence.substr(0,index);
        return ans;
        }
        
    }
};