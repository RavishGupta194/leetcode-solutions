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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // Count total nodes
        int n = 0;
        ListNode* curr = head;

        while (curr) {
            n++;
            curr = curr->next;
        }

        int baseSize = n / k;
        int extra = n % k;

        vector<ListNode*> result;

        curr = head;

        for (int i = 0; i < k; i++) {
            // First 'extra' parts get one additional node
            int partSize = baseSize + (i < extra ? 1 : 0);

            if (partSize == 0) {
                result.push_back(nullptr);
                continue;
            }

            ListNode* partHead = curr;

            // Move to the last node of this part
            for (int j = 1; j < partSize; j++) {
                curr = curr->next;
            }

            // Save the beginning of the next part
            ListNode* nextPart = curr->next;

            // Disconnect current part
            curr->next = nullptr;

            result.push_back(partHead);

            curr = nextPart;
        }

        return result;
    }
};
