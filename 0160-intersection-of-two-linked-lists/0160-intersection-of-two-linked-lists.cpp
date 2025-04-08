/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        ListNode *h1 = headA;
        ListNode *h2 = headB;
        int c1 = 1;
        while(h1->next!=NULL){
            h1= h1->next;
            c1++;
        }
        int c2 = 1;
        while(h2->next!=NULL){
            h2= h2->next;
            c2++;
        }
        int cnt = 0;
        int gap = abs(c1 - c2);
        ListNode *ha = headA;
        ListNode *hb = headB;
        if(c1 >= c2){
            while(cnt < gap && ha->next!=NULL){
                ha = ha->next;
                cnt ++;
            }
        }
        else{
            while(cnt < gap && hb->next!=NULL){
                hb = hb->next;
                cnt ++;
            }
        }
        while(ha!=NULL && hb!=NULL){
            if(ha == hb){
                return ha;
            }
            ha = ha->next ;
            hb = hb->next;
        }
        return NULL;
    }
};