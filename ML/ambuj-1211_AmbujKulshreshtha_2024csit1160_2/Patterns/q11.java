import java.util.*;
public class q11 {
    



    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int c=1;
        int n=scn.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(c+"\t");
                c++;
            }
            System.out.println();
        }

    }
}