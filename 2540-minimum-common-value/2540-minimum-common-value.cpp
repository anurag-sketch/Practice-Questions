class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
//         map<int,int> mp1;
//         map<int,int> mp2;
        
//         for(int i=0;i<nums1.size();i++) mp1[nums1[i]]++;
//         for(int i=0;i<nums2.size();i++) mp2[nums2[i]]++;
        
//         map<int,int> :: iterator itr1;
//         map<int,int> :: iterator itr2;
        
        // for(itr1=mp1.begin();itr1!=mp1.end();itr1++)
        //     {
        //         for(itr2=mp2.begin();itr2!=mp2.end();itr2++)
        //         {
        //             if(itr1->first == itr2->first) return itr1->first;
        //         }
        //     }
        
int i=0;
        int j=0;
        
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i] == nums2[j]) return nums1[i];
            if(nums1[i] > nums2[j]) j++;
            else i++;
        }
        
        
        return -1;
        
    
    }
};