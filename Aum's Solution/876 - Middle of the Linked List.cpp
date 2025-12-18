struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr) return nullptr;

        if(head->next == nullptr) return head;
        if(head->next->next == nullptr) return head->next;
        ListNode* curr = head;
        int count =1;

        while(curr->next != nullptr){
            count++;
            curr = curr->next;
        }
        ListNode* check = head;
        int mid = 1;
        int target = (count/2)+1;

        while(check->next != nullptr){
           if(mid == target){
            return check;
           }
           check = check->next;
           mid++;
        }
    return nullptr;
    }
};