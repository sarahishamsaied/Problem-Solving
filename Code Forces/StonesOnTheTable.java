import java.util.*;
public class Main{
        public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String s = input.next();
        int c = 0,b=0;
        for(int i = 0 ; i< s.length() ; i++){
            if (s.charAt(i)==b)
                c++;
            b = s.charAt(i);
        }
        System.out.println(c);
    }
}