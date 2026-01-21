#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        vector<int> temp;
        for(head = head;head!=nullptr;head=head->next){
            temp.push_back(head->val);
        }
        reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            dummy->next = new ListNode(temp[i]);
            dummy = dummy->next;
        }
        return curr->next;
    }
};
// tryout second time for learning of branching concept