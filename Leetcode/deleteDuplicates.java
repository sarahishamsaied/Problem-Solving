class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}
class Solution {
    public static ListNode deleteDuplicates(ListNode head){
         ListNode curr = head;
        while (curr != null) {
            ListNode temp = curr;
            while (temp != null && temp.val == curr.val) {
                temp = temp.next;
            }
            curr.next = temp;
            curr = curr.next;
        }
        return head;
    }
}