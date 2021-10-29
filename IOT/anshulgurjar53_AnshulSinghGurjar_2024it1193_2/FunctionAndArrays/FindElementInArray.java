import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc= new Scanner(System.in);
    int n=sc.nextInt();int i;
    int a[]=new int[n];
    for( i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    int d=sc.nextInt();
    for(i=0;i<n;i++)
    {
        if(a[i]==d)
        break;
    }
    if(i==n)
    System.out.println(-1);
    else
    System.out.println(i);
 }

}