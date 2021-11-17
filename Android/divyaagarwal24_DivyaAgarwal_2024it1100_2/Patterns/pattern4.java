import java.util.*;

public class pattern4 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
       
        int i,j,n;
        n=scn.nextInt();
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            System.out.print("\t");
            for(j=n;j>i;j--)
            {
                System.out.print("*\t");
            }
            
            System.out.println();

        }// write ur code here

    }
}
