/**
 * Definition for singly-linked list->
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this->val = val; }
 *     ListNode(int val, ListNode next) { this->val = val; this->next = next; }
 * }
 */
class Solution {
    public: 
    ListNode* oddEvenList(ListNode * head) {
    if (head == nullptr|| head->next == nullptr) {
        return head;
    }

        ListNode* even=head->next;
        ListNode* odd=head;
        ListNode* evenHead=even;
        ListNode* oddHead=odd;

        while(even!=nullptr && even->next!=nullptr){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenHead;
        if(even!=nullptr){
            even->next=nullptr;
        }
        return oddHead;

    }
};