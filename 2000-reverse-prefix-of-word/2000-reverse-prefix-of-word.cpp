class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;
        int count = 0;
        
        for(int i=0;i<word.size();i++)
        {
            if(word[i] == ch)
            {
                count=i;
                break;
            }
        }
        int i=0;
        int j=count;
        while(i<count)
        {
            swap(word[i],word[count]);
            i++;
            count--;
        }
        
        return word;
        
        
    }
};