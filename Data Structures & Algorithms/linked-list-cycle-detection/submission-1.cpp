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
    bool hasCycle(ListNode* head) {
     

    ListNode* left=head;
    ListNode* right=head;

    while (left !=nullptr && left->next!=nullptr)
    {
        left=left->next->next;
        right=right->next;

        if(left==right) return true;
    }
    return false;
    
}
};
