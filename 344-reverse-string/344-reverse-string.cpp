class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int si=s.size();
        int i=0;
        int j=si-1;
        while(i<=j)
        {
            char temp;
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        // for(int k=0;k<si;k++)
        // {
        //     cout<<s[i];
        // }
        
        
    }
};