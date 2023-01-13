class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* dummyhead=new ListNode(0);
        dummyhead->next=head;
        ListNode* fast=dummyhead->next;
        ListNode* slow=dummyhead;
        ListNode* temp;
        while(fast)
        {
            temp=dummyhead;
            fast=fast->next;
            slow=slow->next;
            while(temp!=slow)
            {
                temp=temp->next;
                if(temp==fast){
                    return temp;
                }
            }
        }
        return NULL;
    }
};
