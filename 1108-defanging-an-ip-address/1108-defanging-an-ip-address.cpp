class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(int i=0;i<address.size();i++)
        {
            if(address[i] == '.')
            {
                result=result+ "[.]";
            }
            else
            {
                result=result+address[i];
            }
        }
        return result;
        
    }
};