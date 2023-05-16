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
    ListNode* middleNode(ListNode* head) {
        
        int count = 0;
        
        ListNode* t = head;
        
        while(t->next != NULL)
        {
            count++;
            t = t->next;
        }
        count++;
        
        if(count%2 != 0)
        {
            int pos = (count/2) + 1;
            
            t = head;
            while(pos > 1)
            {
                t = t->next;
                pos -- ;
            }
            
            head = t;
            return head;
        }
        else
        {
              int pos = (count/2);
            
            t = head;
            while(pos > 0)
            {
                t = t->next;
                pos --;
            }
            
            head = t;
            return head;
            
        }
        
    }
};