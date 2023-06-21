// import ListNode.java;
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 }
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode curr1 = l1;
        ListNode curr2 = l2;
        String s1 = Integer.toString(curr1.val);
        String s2 = Integer.toString(curr2.val);
        while(curr1.next != null){
            curr1 = curr1.next;
            s1 = Integer.toString(curr1.val) + s1;
        }

        while(curr2.next != null){
            curr2 = curr2.next;
            s2 = Integer.toString(curr2.val) + s2;
        }
        int sum = Integer.parseInt(s1) + Integer.parseInt(s2);
        String s = Integer.toString(sum);
        ListNode l = new ListNode(Integer.parseInt(Character.toString(s.charAt(s.length()-1))));
        ListNode curr = l;
        for(int i = s.length()-2; i >= 0; i--){
            curr.next = new ListNode(Integer.parseInt(Character.toString(s.charAt(i))));
            curr = curr.next;
        }
        return l;
    }
}