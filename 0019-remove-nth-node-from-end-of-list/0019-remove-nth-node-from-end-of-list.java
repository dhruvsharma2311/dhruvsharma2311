/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head==null || head.next==null){
            return null;
        }
        ListNode curr=head;
        int size=1;
        while(curr.next!=null){
            curr=curr.next;
            size++;
        }
        if(n==size){
            return head.next;
        }
        int ptf=size-n;
        int st=0;
        ListNode temp=head;
        while(st<ptf-1){
            temp=temp.next;
            st++;
        }
        temp.next=temp.next.next;
        return head;
    }
}