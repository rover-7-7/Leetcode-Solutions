class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)return head;
        ListNode *slow=head;
        ListNode *fast=slow->next;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;
    }
};