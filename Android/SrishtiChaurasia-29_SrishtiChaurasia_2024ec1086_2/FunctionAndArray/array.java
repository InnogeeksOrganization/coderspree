import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc=new Scanner(System.in);
    int f=-1;
    int n = sc.nextInt();
    int a[] = new int[n];
    for(int i=0;i<n;i++)
    {
      a[i] = sc.nextInt();
    }
    int d = sc.nextInt();

    for (int i=0;i<n;i++)
    {
      if (d==a[i]) 
        {
            System.out.println(i);
            f++;
        }
   }
 if(f==-1)
 System.out.println("-1");

}
}