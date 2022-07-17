//Problem solution in C++.
class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int val_1 , val_2, new_val, remainder;
        ListNode* not_null;
        ListNode* maybe_null;
        
        if(l1 == NULL && l2 == NULL){
            return NULL;
        }
        
        val_1 = (l1 == NULL? 0: l1->val);
        val_2 = (l2 == NULL? 0: l2->val);
        
        not_null = (l1 == NULL? l2: l1);
        maybe_null = ((l1 == not_null)? l2:l1);
        
        not_null->val= val_1+val_2;
        not_null->next = addTwoNumbers(not_null->next, (maybe_null == NULL?NULL:maybe_null->next));
        
        remainder = floor(not_null->val/10);
        not_null->val = (not_null->val%10);
        ListNode* this_node= not_null;
        
        while(remainder != 0 && this_node->next!=NULL){
            (this_node->next->val)+=remainder;
            remainder= floor(this_node->next->val/10);
            (this_node->next->val) = (this_node->next->val%10);
            this_node = this_node->next;
        }
        
        if(remainder!= 0 && this_node->next==NULL){
            this_node->next = new ListNode(remainder);
        }
        
        return not_null;
    }
};