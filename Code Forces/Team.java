import java.util.*;
public class Main {
        public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int x,imp = 0;
        for(int i = 0;i<n;i++){
            int sol = 0;
            for(int j = 0 ;j<3;j++){
              x = input.nextInt();
              sol+=x;
            }
            if(sol>=2)
               imp++;
        }
        System.out.println(imp);
    }
}