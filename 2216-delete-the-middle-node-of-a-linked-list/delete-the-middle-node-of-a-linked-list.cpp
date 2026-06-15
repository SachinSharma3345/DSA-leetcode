/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Edge case: only one node
        if (!head || !head->next)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        // Find middle node
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete middle node
        prev->next = slow->next;

        return head;
    }
};