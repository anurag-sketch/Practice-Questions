/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        int mx = INT_MIN;
        
        vector<int> v;
        
        ListNode* temp = head;
        
        while(temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        int start=0;
        int end = v.size()-1;
        
        while(start <= end)
        {
            int sum;
            sum = v[start] + v[end];
            mx = max(mx,sum);
            start++;
            end --;
        }
        return mx;
        
    }
};