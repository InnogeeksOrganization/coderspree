import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner in= new Scanner (System.in);
    int t=-2;
    int n= in.nextInt();
    int a[] = new int[n];
    for(int i=0;i<n;i++)
    a[i]=in.nextInt();
    int d= in.nextInt();
    for(int j=0;j<n;j++)
        {if(d==a[j])
       {t=j;
       break;}
        }
        if(t!=-2)
         System.out.println(t);
        else 
        System.out.println(-1);
 }

}
    
  