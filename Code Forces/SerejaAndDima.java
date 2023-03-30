import java.util.*;
 class Main{
        public static int max(int x,int y){
        if(x>y)
            return x;
        else
            return y;
    }
       public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int n = input.nextInt();
            int s=0,r=0;
 
            ArrayList<Integer> arr = new ArrayList<Integer>(100);
            for(int i =0;i<n;i++){
                int x = input.nextInt();
                arr.add(x);
            }
            int right = n-1;
            int left = 0,i=1;
            while(i<=n){
                int greater = max(arr.get(left),arr.get(right));
                if(arr.get(right)>arr.get(left)) right--;
                else left++;
                if(i%2 != 0)
                    s+=greater;
                else
                    r+=greater;
                i++;
            }
            System.out.println(s+" "+r);
        }
    }
}