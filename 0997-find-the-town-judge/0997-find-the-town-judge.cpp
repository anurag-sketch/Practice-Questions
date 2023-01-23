class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
//        vector<int> v; 
       
//         for(int i=0;i<trust.size();i++)
//         {
//             v.push_back(trust[i][1]);
//         }
//         vector<int> k;
        
//         for(int i=0;i<trust.size();i++)
//         {
//               k.push_back(trust[i][0]);
//         }
        
//          for(int i=0;i<v.size();i++)
//          {
//              bool mila=false;
//              for(int j=0;j<k.size();j++)
//              {
//                  if(v[i] == k[j]) mila=true;
//              }
//              if(mila==false) return v[i];
//          }
//         return -1;
        
               map<int,set<int>> mp;
        
        for (int i=0;i<trust.size();i++) {
            int a = trust[i][0];
            int b = trust[i][1];
            mp[a].insert(b);
        }
        
        int l = 1, r=n;
        while (l<r) {
            if (mp[l].find(r) != mp[l].end()) {
                l++;
            } else if (mp[r].find(l) != mp[r].end()) {
                r--;
            } else {
                l++;
                r--;
            }
        }
        
        if (l==r) {
            for (int i=1;i<=n;i++) {
                if (i!=l && (mp[l].find(i) != mp[l].end() || mp[i].find(l) == mp[i].end())) {
                    return -1;
                }
            }
        } else {
            return -1;
        }
        return l;
        
    }
};