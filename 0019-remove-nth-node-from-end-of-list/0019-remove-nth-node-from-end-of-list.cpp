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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        int cnt = 1;
        ListNode *curr = head;
        while(curr->next!=NULL){
            curr = curr->next;
            cnt ++;
        }
        if(n==cnt){
            return head->next;
        }
        ListNode *temp = head;
        int i = 0;
        while( i < cnt-n-1){
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;
        return head;
    }
};