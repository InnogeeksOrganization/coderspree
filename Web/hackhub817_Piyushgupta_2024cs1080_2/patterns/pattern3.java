import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();
        int y=n-1;
        int u=1;
        for(int i=1;i<=n;i++)
        {
           for(int k=1;k<=y;k++)
           {
             System.out.print("	");
               
           }
           for(int o=1;o<=u;o++)
           {
               System.out.print("*	");
               
           }
           y--;
           u++;
           System.out.println();
        }

    }
}