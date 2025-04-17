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
    ListNode* reverse(ListNode *head){
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *temp = head;
        while(temp != NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* findKthNode(ListNode *head, int k){
        int count = 1;
        ListNode *curr = head;
        while(curr!=NULL && count < k){
            curr = curr->next;
            count++;
        }
        return curr;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head;
        ListNode *curr = NULL;
        ListNode *prev = NULL;
        while(temp != NULL){
            ListNode *kthNode = findKthNode(temp,k);
            if(kthNode == NULL){
                if(prev != NULL){
                    prev->next = temp;
                    break;
                }
            }
            curr = kthNode->next;
            kthNode->next = NULL;
            ListNode *reversedHead = reverse(temp);
            if(temp == head){          // only for first k group
                head = reversedHead;   //should be reversedHead
            } else {
                prev->next = reversedHead; //should connect to reversedHead
            }
            prev = temp;
            temp = curr;
        }
        return head;
    }
};