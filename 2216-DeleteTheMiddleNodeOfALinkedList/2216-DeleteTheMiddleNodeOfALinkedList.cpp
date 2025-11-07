// Last updated: 07/11/2025, 19:56:38
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
    ListNode* deleteMiddle(ListNode* head) {
        // If the list is empty or has only one node, return nullptr.
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        // Calculate the length of the linked list.
        int n = 0;
        ListNode* h = head;
        while (h != nullptr) {
            h = h->next;
            n++;
        }

        // Find the middle index.
        int limit = n / 2;

        // Traverse the list again to find the node just before the middle node.
        ListNode* temp = head;
        for (int i = 1; i < limit; i++) {
            temp = temp->next;
        }

        // Delete the middle node.
        ListNode* middleNode = temp->next;
        temp->next = middleNode->next;
        delete middleNode;

        // Return the head of the modified list.
        return head;
    }
};
