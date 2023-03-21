import java.util.*;
public class Main{
       public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int hired = 0, unsolvedCrimes = 0;
        ArrayList<Integer> arr = new ArrayList<Integer>(100);
        for (int i = 0;i<n;i++){
            int x = input.nextInt();
            arr.add(x);
        }
       for (int i = 0 ;i<arr.size();i++){
           if(arr.get(i)>0)
           {
               hired+=arr.get(i);
               continue;
           }
           if(arr.get(i)<0 && hired > 0){
               hired--;
               continue;
           }
           if(arr.get(i)<0){
               unsolvedCrimes++;
           }
       }
        System.out.println(unsolvedCrimes);
    }
}