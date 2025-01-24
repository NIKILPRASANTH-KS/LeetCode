/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode head1, ListNode head2) {
        if(head1==null || head2==null) return null;
        ListNode ptr1=head1;
        ListNode ptr2=head2;
        while(ptr1!=ptr2){
            if(ptr1==null) ptr1=head2;
            else ptr1=ptr1.next;
            if(ptr2==null) ptr2=head1;
            else ptr2=ptr2.next;
        }
        return ptr2;
    }
}