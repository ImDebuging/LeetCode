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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* head_temp=new ListNode(0);
        head_temp->next=head;
        ListNode* fast=head_temp;
        while(fast->next!=nullptr)
        {
            if(fast->next->val==val){
                ListNode* temp=fast->next;
                fast->next=temp->next;
                delete temp;
                temp=nullptr;
            }
            else{
                fast=fast->next;
            }
        }
        head=head_temp->next;
        delete head_temp;
        return head;
    }
};
