class Solution {
public:
    bool checkString(string s) {
       string com = s;
        sort(com.begin(),com.end());
        
        if(s == com) return true;
        else return false;
    }
};