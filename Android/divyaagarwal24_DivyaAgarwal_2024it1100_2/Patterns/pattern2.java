import java.util.*;

public class pattern2 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int i,n,j;
        n=scn.nextInt();
        for(i=0;i<n;i++)
        {
            for(j=n;j>i;j--)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }

        // write ur code here

    }
}
