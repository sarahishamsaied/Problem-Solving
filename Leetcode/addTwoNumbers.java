
 public class addTwoNumbers {
     int val;
     addTwoNumbers next;
     addTwoNumbers() {}
 addTwoNumbers(int val) { this.val = val; }
     addTwoNumbers(int val, addTwoNumbers next) { this.val = val; this.next = next; }
  }
 
class Solution {
    public addTwoNumbers addTwoNumbers(addTwoNumbers l1, addTwoNumbers l2) {
        return l2;
        
    }
}