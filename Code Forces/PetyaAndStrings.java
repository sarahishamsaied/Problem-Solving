import java.util.*;
 
 class Main {
        public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            String s1 = input.next();
            String s2 = input.next();
            if(s1.compareToIgnoreCase(s2)<0)
                System.out.println("-1");
            else if(s1.compareToIgnoreCase(s2)==0)
                System.out.println("0");
            else
                System.out.println("1");
        }
    }
}