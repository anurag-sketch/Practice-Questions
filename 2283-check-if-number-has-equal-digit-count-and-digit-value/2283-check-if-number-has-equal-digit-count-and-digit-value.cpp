class Solution {
public:
    bool digitCount(string num) {
    
        for(int i=0;i<num.size();i++)
        {
        int count = 0;
            for(int j =0;j<num.size();j++)
            {
                int x = num[j] - '0';
                if(i == x) count++;
            }
            int k = num[i] - '0';
            if(count != k) return false;
        }
        return true;
        
        
    }
};