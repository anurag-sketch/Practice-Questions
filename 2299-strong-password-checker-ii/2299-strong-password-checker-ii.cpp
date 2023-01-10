class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        
        if(password.size()>=8)
        {
             bool capitalcheck=false;
             bool lowercheck=false;
            bool digitcheck=false;
            bool specialcheck=false;
            for(int i=0;i<password.size();i++)
            {
                if(int(password[i]) >= 65 && int(password[i]) <= 90)
                {
                    capitalcheck = true;
                }
                if(int(password[i]) >= 97 && int(password[i]) <= 122)
                {
                 lowercheck =true;   
                }
                if(int(password[i]) >= 48 && int(password[i]) <= 57)
                {
                    digitcheck=true;
                }
                if(password[i] =='!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+')
                {
                    specialcheck=true;
                }
            }
            
            for(int i=0;i<password.size()-1;i++)
            {
                if(password[i] == password[i+1])
                {
                    return false;
                }
            }
            
            return (capitalcheck & lowercheck & digitcheck & specialcheck);
        }
        else
        {
            return false;
        }
    }
};