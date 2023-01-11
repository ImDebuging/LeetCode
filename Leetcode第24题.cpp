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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyhead=new ListNode(0,head);
        ListNode* cur=dummyhead;
        ListNode* temp;
        ListNode* ret;
        if(head!=nullptr&&head->next!=nullptr){
            ret=head->next;
        }else{
            ret=head;
        }
        while(cur->next!=nullptr&&            cur->next->next!=nullptr)
        {
            temp=cur->next;
            cur->next=cur->next->next;
            temp->next=cur->next->next;
            cur->next->next=temp;
            cur=cur->next->next;
        }
        delete dummyhead;
        return ret;
    }
};
