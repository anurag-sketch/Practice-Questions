class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
         vector<string> v;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                string s ="FizzBuzz";
                v.push_back(s);
            }
            else if(i%3==0)
            {
                string s = "Fizz";
                v.push_back(s);
            }
            else if(i%5 ==0)
            {
                string s = "Buzz";
                v.push_back(s);
            }
            else
            {
                string s=to_string(i);
                v.push_back(s);
            }
        }
        return v;
        
    }
};