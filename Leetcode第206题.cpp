class Solution1 {         //双指针法
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* cur=head;
        ListNode* pre=nullptr;
        ListNode* temp;
        while(cur)
        {
            temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        return pre;
    }
};




//递归法
ListNode* reverse(ListNode* cur,ListNode* pre)
{
    if(!cur){return pre;}
    ListNode* temp=cur->next;
    cur->next=pre;
    return reverse(temp,cur);
}
class Solution2 {
public:
    ListNode* reverseList(ListNode* head) {
         return reverse(head,nullptr);
    }
};
