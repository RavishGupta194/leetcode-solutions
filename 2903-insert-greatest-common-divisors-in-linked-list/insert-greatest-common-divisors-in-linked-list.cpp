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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            int g = gcd(curr->val, curr->next->val);

            // Create the new GCD node
            ListNode* newNode = new ListNode(g);

            // Insert it between curr and curr->next
            newNode->next = curr->next;
            curr->next = newNode;

            // Move to the original next node
            curr = newNode->next;
        }

        return head;
    }
};
