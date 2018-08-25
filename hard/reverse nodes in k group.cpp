/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count =0,temp_len_cnt = 0;
        ListNode *prev=NULL, *curr = head, *next =NULL,*temp_len =head, *temp_next = NULL;
        
        if (curr == NULL)
        {return 0;}  
        
        
        while(curr != NULL && count<k){
            next = curr->next;
            curr->next=prev;
            prev = curr;
            curr = next;
            count ++;
        }
        
        if(curr == NULL && count !=k)
        {
            ListNode *prev1=NULL, *curr1 = prev, *next =NULL;
            while(curr1 != NULL){
            next = curr1->next;
            curr1->next=prev1;
            prev1 = curr1;
            curr1 = next;
        }
            return prev1;
        }
        
        if(next != NULL)
        {
            ListNode *curr_len = next; int count_len =0;
            while(curr_len!=NULL)
            {
                count_len++;
                curr_len = curr_len->next;
            }
            if(count_len < k)
            {
                head -> next = next;
            }
            else
            {
                head -> next = reverseKGroup(next,k);
            }
            
        }
        
            return prev;
        
        
    }
};