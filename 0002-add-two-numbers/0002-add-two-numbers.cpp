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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *x = l1;
        ListNode *y = l2;
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        int sum = 0;
        int ans = 0;
        int carry = 0;
        while( x!=NULL || y!=NULL){
            sum = carry;
            if(x!=NULL){
                sum = sum + x->val;
                x = x->next;
            }
            if(y!=NULL){
                sum = sum + y->val;
                y = y->next;
            }
            ans = sum % 10;
            ListNode *temp = new ListNode(ans);
            carry = sum/10;
            curr->next= temp;
            curr = curr->next;
            if(carry!=0){
                ListNode *carr = new ListNode(carry);
                curr->next = carr;
            }
        }
        return dummy->next;
    }
};