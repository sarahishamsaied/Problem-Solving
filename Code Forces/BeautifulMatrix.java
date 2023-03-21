import java.util.*;
public class Main {
        public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int col = 0,row = 0;
        int[][] arr = new int[10][20];
        int x;
        for (int i =0 ;i<5;i++){
            for(int j =0;j<5;j++){
                arr[i][j] = input.nextInt();
                if(arr[i][j] == 1){
                    row = i;
                    col = j;
                }
 
            }
        }
        x = Math.abs(2 - row) + Math.abs(2-col);
        System.out.println(x);
    }
}