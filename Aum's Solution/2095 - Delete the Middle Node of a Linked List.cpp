#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 
//optimized approch in single traversal
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode* singleJmp = head;
        ListNode* doubleJmp = head;
        ListNode* prev = NULL;

        while (doubleJmp != NULL && doubleJmp->next != NULL) {
            prev = singleJmp;
            singleJmp = singleJmp->next;
            doubleJmp = doubleJmp->next->next;
        }
        
        prev->next = singleJmp->next;
        return head;
    }
};

/*   brute force calculating size and then running loop till n/2
 class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head->next) {
            return nullptr;
        }
        int n = 0;
        ListNode* curr = head;

        while (curr) {
            n++;
            curr = curr->next;
        }
        curr = head;

        for (int i = 0; i < n / 2 - 1; i++) {
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};
*/