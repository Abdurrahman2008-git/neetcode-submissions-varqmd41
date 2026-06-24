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
    ListNode* reverseList(ListNode* head) {

        stack<ListNode*> List;
        ListNode* temp=head;

        if(head == nullptr){
            return nullptr;
        }
        while (temp!=nullptr)
        {
            List.push(temp);
            temp=temp->next;
        }

        ListNode* newhead=List.top();
       

        while (!List.empty())
        {
            ListNode* node1=List.top();
            List.pop();
            if(List.empty()) break;
            ListNode* node2=List.top();
            node1->next=node2;
            node2->next=nullptr;
        }
        
        return newhead;
    }
};


