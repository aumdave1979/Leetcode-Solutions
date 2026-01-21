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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr)return head;
        ListNode * n=new ListNode(0);
        ListNode * e=n;
        int temp = head->val;
        for( ; head != nullptr ; ){
            if(head->next!=nullptr && head->val==head->next->val){
                temp = head->val;
                for( ; head != nullptr && head->val == temp; head=head->next){

                }
            }
            else{
                n->next = new ListNode(head->val);
                n=n->next;
                head=head->next;
            }
        }
        return e->next;
    }
};