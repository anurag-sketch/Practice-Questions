class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> ans;
        ans.push_back(first);
        for(int i = 0;i<encoded.size();i++)
        {
          //(ans[i])^(encoded[i])=(ans[i]^ans[i])^(ans[i+1]);
        int  k;
            k = (ans[i]) ^ (encoded[i]);
            ans.push_back(k);
            
        }
        return ans;
        
        
    }
};