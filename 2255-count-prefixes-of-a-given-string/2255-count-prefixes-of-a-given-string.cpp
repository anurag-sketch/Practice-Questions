class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int count = 0;
        for(int i=0;i<words.size();i++)
        {
            int x = words[i].size();
            
            string k = s.substr(0,x);
            
            if(words[i] == k)
            {
                count++;
            }
            
        }
        
        return count;
    }
};