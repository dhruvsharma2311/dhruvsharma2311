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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode *curr = head;
        int cnt = 1;
        while(curr->next!=NULL){
            curr = curr->next;
            cnt ++;
        }
        int size = cnt/2;
        int count = 0;
        ListNode* temp = head;
        while(count < size-1){
            temp = temp->next;
            count ++;
        }
        temp->next = temp->next->next;
        return head;

    }
};