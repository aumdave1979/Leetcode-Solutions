
//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = head;
        if(head==nullptr){
            return head;
        }
        for(;head->next !=nullptr;){
            if(head->next->val == val){
                ListNode* dave = head->next;
                head->next = head->next->next;
            }
            else{
                head = head->next;
            }
        }
        if(dummy->val==val){
            return dummy->next;
        }
    return dummy;
    }
};