class Solution {
public:
    bool squareIsWhite(string s) {
     
    int x = int(s[0]) - 1;
        int y = int(s[0]);
        if(x%2 == 0)
        {
            if(( (s[1]-'0') - 1) % 2 == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        else
        {
            if((s[1] - '0') % 2 == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }

        
        
     
    }
};