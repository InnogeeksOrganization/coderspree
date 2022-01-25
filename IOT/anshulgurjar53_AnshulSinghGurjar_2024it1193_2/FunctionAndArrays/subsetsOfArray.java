import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);

      int n = sc.nextInt();
      int a[]=new int[n];
      for(int i=0;i<n;i++)
        a[i]=sc.nextInt();
      
      int lim=(int)Math.pow(2,n);
      String s="";int r=0;
      for(int i=0;i<lim;i++)
      {
          int m=i;
          for(int j=n-1;j>=0;j--)
          {
           r=m%2;m=m/2;
            if(r==0)
              s="-"+"\t"+s;
            else
              s=a[j]+"\t"+s;  

              
          }
          System.out.println(s);
          s="";
      }

    
 
}

}