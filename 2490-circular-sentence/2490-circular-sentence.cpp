class Solution {
public:
    bool isCircularSentence(string sentence) {
             
        int n = sentence.size()-1;
        if(sentence.at(0) != sentence.at(n))
        {
            return false;
        }
        
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i] == ' ' && (sentence[i+1] != sentence[i-1]))
            {
                return false;
            }
        }
        return true;
       
        
    }
};