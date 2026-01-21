
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* merged = new ListNode(0);
        ListNode* answer = merged;
        while(curr1->next !=nullptr && curr2->next != nullptr){
            if(curr1->data <= curr2->data){
                merged->next = curr1->data;
                curr1 = curr1->next;
            }
            else{
                merged->next = curr2->data;
                curr2 = curr2->next;
            }
        merged = merged->next;
        }
        while(curr1!=nullptr){
            merged->next = curr1->data;
            curr1 = curr1->next;
            merged = merged->next;
        }
        while(curr2!=nullptr){
            merged->next = curr2->data;
            curr2 = curr2->next;
            merged = merged->next;;
        }
    return answer->next;
    }
};