class Solution {
public:
    string removeTrailingZeros(string num) {
        
        if(num[num.size()-1] == '0')
        {
            int j = num.size()-1;
            while(num[j] == '0')
            {
                num.pop_back();
                j--;
            }
        }
        
        return num;
        
    }
};