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
    void reorderList(ListNode* head) {
    deque<int> dq;  
    

    if(!head){
        return;
    }

    ListNode* temp=head;
    while (temp!=nullptr)
    {
        dq.push_back(temp->val);
        temp=temp->next;
    }

    //new head
    ListNode* curr=head;
    head->next=nullptr;
    dq.pop_front();

    while (dq.size())
    {
        curr->next=new ListNode(dq.back());
        curr=curr->next;
        curr->next=nullptr;
        dq.pop_back();

        if(dq.empty()){
            break;
        }
        curr->next=new ListNode(dq.front());
        curr=curr->next;
        curr->next=nullptr;
        dq.pop_front();
    }
    
    
}
};
