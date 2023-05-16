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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     
        int count = 0;
        ListNode* counter = head;
        
        while(counter->next != NULL)
        {
            counter = counter->next;
            count++;
        }
        count ++;
        
        if(count == 1 && n==1)
        {
            ListNode *temp = head;
            
            head = temp->next;
            return head;
            
        }
        
        int pos = count - n;
        int sos = count - n;
        
        if(sos == 0)
        {
                    ListNode *temp = head;
            head = temp->next;
            return head;
            
        }
        ListNode* p = head;
        ListNode* q = head;
        
        while(pos > 0)
        {
            p = p->next;
            pos -- ;
        }
        
        while(sos > 1)
        {
            q = q->next;
            sos --;
        }
        
        q->next = p->next;
        return head;
        
        
        
    }
};