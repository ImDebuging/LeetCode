class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyhead=new ListNode(0,head);
        ListNode* fast=dummyhead;
        ListNode* slow=dummyhead;
        for(int i=0;i<n+1&&fast!=nullptr;++i)
        {
            fast=fast->next;
        }
        while(fast)
        {
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        slow->next=temp->next;
        delete temp;
        return dummyhead->next;
    }
};
