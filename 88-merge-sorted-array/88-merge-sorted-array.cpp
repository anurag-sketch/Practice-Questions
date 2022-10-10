class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> ans;
        
        int i=0;
        while(i<m)
        {
            ans.push_back(nums1[i]);
            i++;
        }
        int j=0;
            while(j<n)
        {
            ans.push_back(nums2[j]);
            j++;
        }
        
        sort(ans.begin(),ans.end());
        int k=0;
        int si=ans.size();
        vector<int>fi;
        while(k<si)
        {
               
               {
                   fi.push_back(ans[k]); 
               }
            k++;
        }
    nums1=fi;
        nums2=fi;
            
        
        
    }
};