
import java.util.*;

public class Main {

  public static void main(String[] args) throws Exception {
     Scanner sc=new Scanner(System.in);
     int n=sc.nextInt();
     int a[]=new int[n];int temp;
     for(int i=0;i<n;i++)
       a[i]=sc.nextInt();
     int l=a[0],sl=a[0],s=a[0],ss=a[0];
     for(int i=0;i<n;i++)
     {
         if(a[i]>l)
          l=a[i];
         if(a[i]<s)
          s=a[i];
     }
     for(int i=0;i<n;i++)
     {
         if(a[i]>sl&&a[i]!=l)
           sl=a[i];
         if(a[i]<ss&&a[i]!=s)
           ss=a[i];
     }
     System.out.print(sl+" ");
     System.out.print(ss);

  }
}
