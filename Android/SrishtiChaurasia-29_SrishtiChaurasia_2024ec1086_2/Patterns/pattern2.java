import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int i,j,n;
        n= scn.nextInt();
        for(i=n;i>=0;i--)
        {
            for(j=1;j<=i;j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
            
        }

    }
}