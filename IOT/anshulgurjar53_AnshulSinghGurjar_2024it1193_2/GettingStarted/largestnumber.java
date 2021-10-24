import java.io.*;
import java.util.*;

public class Main {

  public static void main(String[] args) throws Exception {
      
      Scanner sc=new Scanner(System.in);
      int t=sc.nextInt();
      for(int i=1;i<=t;i++)
      {
     int n=sc.nextInt();int j;
     int a[]=new int[n];int temp;
     for( j=0;j<n;j++)
       a[j]=sc.nextInt();
       
     int l=a[0],loc=0;
     for( j=0;j<n;j++)
     {
         if(a[j]>l)
         {
          l=a[j];
          loc=j;
         }

     }
     temp=a[loc];
     a[loc]=a[0];
     a[0]=temp;
     for(j=0;j<n;j++)
     System.out.print(a[j]+" ");
     System.out.println();
     }
     
    // write your code here
  }

}