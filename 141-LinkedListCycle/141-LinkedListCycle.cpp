// Last updated: 07/11/2025, 19:58:17
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr) {
            return false;
        }
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            
            // Check if fast and slow pointers meet, indicating a cycle
            if(fast == slow)
                return true;
        }
        
        // If fast reaches the end of the list, there is no cycle
        return false;
    }
};
