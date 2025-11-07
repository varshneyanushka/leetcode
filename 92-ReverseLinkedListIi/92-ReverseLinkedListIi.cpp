// Last updated: 07/11/2025, 19:58:43
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> vec;
        ListNode *p = head;
        while(p) 
        {
            vec.push_back(p->val);
            p = p->next;
        }
        reverse(vec.begin() + left - 1, vec.begin() + right);
        int v=vec[0];

        ListNode* head2 =new ListNode(v);
        ListNode* tail =nullptr;
        tail=head;
        for(int i: vec)
        {
            tail->val=i;
            tail=tail->next;
        }

        return head;

    }
};