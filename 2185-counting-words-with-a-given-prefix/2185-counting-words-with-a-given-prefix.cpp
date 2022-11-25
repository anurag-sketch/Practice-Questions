class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int x = pref.size();
        for(int i=0;i<words.size();i++)
        {
            string s;
            s= words[i].substr(0,x);
            if(pref == s)
            {
                count++;
            }
            
        }
        return count;
        
    }
};