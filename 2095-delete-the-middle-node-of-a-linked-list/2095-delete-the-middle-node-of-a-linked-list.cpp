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
    ListNode* deleteMiddle(ListNode* head) {
        
        int count = 0;
        
        ListNode *counter = head;
        
        while(counter->next != NULL)
        {
            count++;
            counter = counter->next;
        }
        count ++;
        
        if(count  == 1)
        {
          ListNode *t = head;
            head = t->next;
            return head;
        }
        
        ListNode *p = head;
        ListNode *q = head;
        
        int pos = (count / 2);
        int sos = (count / 2);
        while(pos > 0)
        {
            q = q->next;
            pos -- ;
        }
        
        while(sos > 1)
        {
            p = p->next;
            sos --;
        }
        
        p->next = q->next;
        
        return head;
        
        
        
        
    }
};