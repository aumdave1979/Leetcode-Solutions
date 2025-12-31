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
    ListNode* insertionSortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* x = new ListNode(0);
        x->next = head;
        head = x;
        for (ListNode* curr = head->next; curr->next != nullptr; ) {
            if (curr->next->val >= curr->val) {
                curr = curr->next;
                continue;
            }
            ListNode* node = curr->next;
            curr->next = node->next;
            for (ListNode* dum = head; dum->next != nullptr; dum = dum->next) {
                if (dum->next->val > node->val) {
                    node->next = dum->next;
                    dum->next = node;
                    break;
                }
            }
        }
        return head->next;
    }
};
