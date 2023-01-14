class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        double total = s.size();
        double count = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == letter) count++;
        }
        
        return (count/total)*100;
        
    }
};