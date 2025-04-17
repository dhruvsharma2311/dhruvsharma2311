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
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode *curr = head;
        int cnt = 1;
        while(curr->next!=NULL){
            curr = curr->next;
            cnt++;
        }
        k = k % cnt;
        if(k==0){
            return head;
        }
        int pt = abs(cnt - k);
        int c = 1;
        ListNode *temp = head;
        while(c < pt){
            temp = temp->next;
            c++;
        }
        ListNode *tail = temp;
        ListNode *newHead = temp->next;
        tail->next = NULL;
        curr->next = head;
        return newHead;
        
    }
};