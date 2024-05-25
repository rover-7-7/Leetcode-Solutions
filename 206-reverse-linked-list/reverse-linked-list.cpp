class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     ListNode * p=NULL;
     if(head==NULL)return head;
     ListNode * q=head;
     ListNode * r=NULL;

     while(q!=NULL){
        r=q->next;
     q->next=p;
     p=q;
     q=r;
     }
     
     return p;
      
    }
};