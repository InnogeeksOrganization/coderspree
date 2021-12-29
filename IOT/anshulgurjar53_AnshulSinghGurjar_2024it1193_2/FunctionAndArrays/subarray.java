import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc= new Scanner(System.in);
    int n=sc.nextInt();
    int a[]=new int[n];
    for(int i=0;i<n;i++)
    a[i]=sc.nextInt();
    for(int k=0;k<n;k++)
    {
    for(int i=k;i<n;i++)
    {
        //System.out.println(a[i]);
        for(int j=k;j<=i;j++)
        {
            System.out.print(a[j]+"\t");

        }
        System.out.println();
    }
    }
 }

}