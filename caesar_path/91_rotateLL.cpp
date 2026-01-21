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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr) return head;
        ListNode* d = head;
        vector<int>a;
        for(;d!=nullptr;d=d->next){
            a.push_back(d->val);
        }
        if(k>a.size())k=k%a.size();
        
        for(int j =0;j<k;j++){
            int p = a[0];
            for(int i =1;i<a.size();i++){
            int b=a[i];
            a[i]=p;
            p=b;
        }
        a[0]=p;
        }
        d=head;
        for(int i =0;i<a.size();i++){
            d->val=a[i];
            d=d->next;
        }
       
        return head;
    }
};