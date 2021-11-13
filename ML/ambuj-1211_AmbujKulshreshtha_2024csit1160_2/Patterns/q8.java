import java.util.*;

public class q8 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();
        int i,j,k=n;
        for(i=n;i>=1;i--){
            for(j=1;j<=i;j++){
                if(j==k)
                System.out.print("*\t");
                else
                System.out.print("\t");
            }
            k--;
            System.out.println();
        }

    }
}