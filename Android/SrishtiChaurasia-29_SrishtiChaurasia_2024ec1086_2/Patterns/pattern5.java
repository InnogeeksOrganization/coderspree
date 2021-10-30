import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n,i,sp,a,j;

        n = scn.nextInt();
     sp = n / 2;
     a = 1; 
    for (i = 1; i <= n; i++)
    {
      for (j = 1; j <=sp; j++) 
      {
        System.out.print("\t");
      }
      for (j = 1; j <=a; j++)
      {
        System.out.print("*\t");
      }
      if ( i <= n / 2)
      { 
          sp--; 
          a=a+2;
      }
        else
        {
          sp++; 
          a=a-2;
        }
          System.out.println();
      }

    }
}